#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int prime[78500];
    bool isVisit[1000001];
    int c = 0, m, n, start = 1;
    //ÿ����������������ǲ�������  false->����
    for (int i = 2; i <= 1000000; ++i)//�Ϲ�أ���������
    {
        if (!isVisit[i]) { //��������δ�����ʣ���������
            prime[++c] = i;//�����������������������棬����+1
            //cout << prime[c] << ",";
        }
        for (int j = 1; j <= c && i * prime[j] <= 1000000; ++j) {
            isVisit[i * prime[j]] = true;//����������õ������ֶ�������
            if (i % prime[j] == 0)
                break;
        }
    }
    /*
     * ��������ȫ������
     * ����������ݴ�����
     */

    cin >> m >> n;
    if (m > n) {
        int exchange;
        exchange = m;
        m = n;
        n = exchange;
    }
    if(m>999989){
        cout<<0;
        return 0;
    }
    for (; start <= 78498; start++)//����forѭ�������Զ��ֲ����Ż�����ac���ٹ�
        if (prime[start] >= m) {
            break;
        }
    for (int j = start; j <= 78498; j++)
        if (prime[j] > n) {
            cout << j - start ;
            return 0;
        }
    cout << 78499 - start;

    return 0;
}
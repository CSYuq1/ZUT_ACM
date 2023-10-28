#include <iostream>

using namespace std;

int main() {
    int prime[20000];//�������������ʵ����û����ô������
    int c = 0;
    bool isVisit[100001];//ÿ����������������ǲ�������  false->����
    for (int i = 2; i <= 100000; ++i)//�Ϲ�أ���������
    {
        if (!isVisit[i]) { //��������δ�����ʣ���������
            prime[++c] = i;//�����������������������棬����+1
            //cout<<prime[c]<<endl;
        }
        //����forѭ�������������������㷨�ľ���
        for (int j = 1; j <= c && i * prime[j] <= 100001; ++j) {
            isVisit[i * prime[j]] = true;//����������õ������ֶ�������
            if (i % prime[j] == 0)//���п����������ǲ���ɾ��
                break;
        }
    }

    /*
     *��һ����������������һ�������õ�M,N֮��������
     */
    int m, n, start = 0;
    cin >> m >> n;
    for (int i = 1; i < 20000; i++)
        if (prime[i] >= m) {
            start = i;
            break;
        }

    unsigned long long sum = 0;
    for (int j = start; j < 20000; j++)
        if (prime[j] <= n)
            sum += prime[j];
    else break;
    cout << sum;
    return 0;
}
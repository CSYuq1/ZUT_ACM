#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int prime[78500], c = 0, m, n, start = 0;
    bool isVisit[1000001];//ÿ����������������ǲ�������  false->����
    for (int i = 2; i <= 1000000; ++i)//�Ϲ�أ���������
    {
        if (!isVisit[i]) { //��������δ�����ʣ���������
            prime[++c] = i;//�����������������������棬����+1
        }
        for (int j = 1; j <= c && i * prime[j] <= 1000001; ++j) {
            isVisit[i * prime[j]] = true;//����������õ������ֶ�������
            if (i % prime[j] == 0)
                break;
        }
    }
    cin >> m >> n;
    for (int i = 1; i <= 78499; i++)
        if (prime[i] >= m) {
            start = i;
            break;
        }
    for (int j = start; j <= 78499; j++)
        if (prime[j] > n) {
            cout << j - start << '\n';
            return 0;
        }
    cout << 78498;
    return 0;
}
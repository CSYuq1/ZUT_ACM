#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int prime[200000];
    int c = 0;
    bool isVisit[1000001];//ÿ����������������ǲ�������  false->����
    for (int i = 2; i <= 1000000; ++i)//�Ϲ�أ���������
    {
        if (!isVisit[i]) { //��������δ�����ʣ���������
            prime[++c] = i;//�����������������������棬����+1
        }
        //����forѭ�������������������㷨�ľ���
        for (int j = 1; j <= c && i * prime[j] <= 1000001; ++j) {
            isVisit[i * prime[j]] = true;//����������õ������ֶ�������
            if (i % prime[j] == 0)//���п����������ǲ���ɾ��
                break;
        }
    }

    /*
     *��һ����������������һ�������õ�M,N֮��������
     */
    int m, n, start;
        start = 0;
        cin>>m>>n;
        for (int i = 1; i < 200000; i++)
            if (prime[i] >= m) {
                start = i;
                break;
            }
        //unsigned long long sum = 0;
        for (int j = start; j < 200000; j++)
            if (prime[j] > n){
                cout << j - start << '\n';
                break;
            }



    //cout << sum;
    return 0;
}
//
// Created by lenovo on 2023/11/4.
//
#include "iostream"

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int prime[20000];//�������������ʵ����û����ô������
    int c = 0;
    bool isVisit[100001];//ÿ����������������ǲ�������  false->����
    for (int i = 2; i <= 100000; ++i)//�Ϲ�أ���������
    {
        if (!isVisit[i])  //��������δ�����ʣ���������
            prime[++c] = i;//�����������������������棬����+1

        //����forѭ�������������������㷨�ľ���
        for (int j = 1; j <= c && i * prime[j] <= 100001; ++j) {
            isVisit[i * prime[j]] = true;//����������õ������ֶ�������
            if (i % prime[j] == 0)//���п����������ǲ���ɾ��
                break;
        }
    }
    int k;
    cin >> k;
    for(int i=0;prime[i]<=k/2;i++)
    {
        if(!isVisit[k-prime[i]])
            cout<<k<<'='<<prime[i]<<'+'<<k-prime[i]<<'\n';
    }
    return 0;
}
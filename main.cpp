//
// Created by lenovo on 2023/11/4.
//
#include "iostream"

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int prime[20000];//代表储存的素数，实际上没有这么多素数
    int c = 0;
    bool isVisit[100001];//每个变量代表这个数是不是素数  false->素数
    for (int i = 2; i <= 100000; ++i)//老规矩，遍历区间
    {
        if (!isVisit[i])  //如果这个数未被访问，则是素数
            prime[++c] = i;//将素数保存在素数数组里面，计数+1

        //下面for循环及里面的语句才是这个算法的精髓
        for (int j = 1; j <= c && i * prime[j] <= 100001; ++j) {
            isVisit[i * prime[j]] = true;//质数相乘所得到的数字都是奇数
            if (i % prime[j] == 0)//这行看不懂，但是不敢删掉
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
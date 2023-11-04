//
// Created by lenovo on 2023/10/28.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int prime[20000];//代表储存的素数，实际上没有这么多素数
    int c = 0;
    bool isVisit[100001];//每个变量代表这个数是不是素数  false->素数
    for (int i = 2; i <= 100000; ++i)//老规矩，遍历区间
    {
        if (!isVisit[i]) { //如果这个数未被访问，则是素数
            prime[++c] = i;//将素数保存在素数数组里面，计数+1
            //cout<<prime[c]<<endl;
        }
        //下面for循环及里面的语句才是这个算法的精髓
        for (int j = 1; j <= c && i * prime[j] <= 100001; ++j) {
            isVisit[i * prime[j]] = true;//质数相乘所得到的数字都是奇数
            if (i % prime[j] == 0)//这行看不懂，但是不敢删掉
                break;
        }
    }

    /*
     *上一段用来求素数，这一段用来得到M,N之间素数和
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
#include <iostream>

using namespace std;

int main() {
    int prime[20000];
    int c = 0;
    bool isVisit[100001]; //默认都是false
    for (int i = 2; i <= 100000; ++i)//老规矩，遍历区间
    {
        if (!isVisit[i]) { //如果这个数未被访问，则是素数
            prime[++c] = i;//将素数保存在素数数组里面，计数+1
            //cout<<prime[c]<<endl;
        }
        //下面for循环及里面的语句才是这个算法的精髓，我们下面细讲
        for (int j = 1; j <= c && i * prime[j] <= 100001; ++j) {
            isVisit[i * prime[j]] = true;
            if (i % prime[j] == 0)
                break;
        }
    }
    int m, n, start = 0;
    cin >> m >> n;
    for (int i = 1; i < 20000; i++)
        if (m <=prime[i]) {
            start = i;
            break;
        }
    for (int j = start; j < 20000; j++)
        if (n <= prime[j]) {
            cout << j - start ;
            return 0;
        }
    return 0;
}
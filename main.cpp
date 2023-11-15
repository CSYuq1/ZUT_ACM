#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int prime[78500], c = 0, m, n, start = 0;
    bool isVisit[1000001];//每个变量代表这个数是不是素数  false->素数
    for (int i = 2; i <= 1000000; ++i)//老规矩，遍历区间
    {
        if (!isVisit[i]) { //如果这个数未被访问，则是素数
            prime[++c] = i;//将素数保存在素数数组里面，计数+1
        }
        for (int j = 1; j <= c && i * prime[j] <= 1000001; ++j) {
            isVisit[i * prime[j]] = true;//质数相乘所得到的数字都是奇数
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
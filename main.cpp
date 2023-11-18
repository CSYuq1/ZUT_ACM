#include <iostream>

using namespace std;
int prime[78500];
bool isVisit[1000001];

int foo(int m, int n) {
    int start = 1;
    if (m > n) {
        int exchange;
        exchange = m;
        m = n;
        n = exchange;
    }
    if (m > 999983) {
        return 0;
    }
    for (; start <= 78498; ++start)//两个for循环还可以二分查找优化，先ac了再管
        if (prime[start] >= m) {
            break;
        }
    for (int j = start; j <= 78498; j++)
        if (prime[j] > n)
            return j - start;

    return 78499 - start;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int primenum(int m, int n) {
    int sum = 0;
    sum = 0;
    if (m > n) {
        int exchange;
        exchange = m;
        m = n;
        n = exchange;
    }
    for (int i = m; i <= n; i++) {
        if (isPrime(i)) {
            sum = sum + 1;
        }
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c = 0, m, n, start = 1;
    //每个变量代表这个数是不是素数  false->素数
    for (int i = 2; i <= 1000000; ++i)//老规矩，遍历区间
    {
        if (!isVisit[i]) { //如果这个数未被访问，则是素数
            prime[++c] = i;//将素数保存在素数数组里面，计数+1
            //cout << prime[c] << ",";
        }
        for (int j = 1; j <= c && i * prime[j] <= 1000000; ++j) {
            isVisit[i * prime[j]] = true;//质数相乘所得到的数字都是奇数
            if (i % prime[j] == 0)
                break;
        }
    }
    /*
     * 上面是求全部素数
     * 下面才是数据处理部分
     */

    while (cin >> m >> n)
        cout << foo(m, n) << '\n';

    return 0;
}
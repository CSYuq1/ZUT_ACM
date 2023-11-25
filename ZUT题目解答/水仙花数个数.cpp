//
// Created by 19003 on 2023/11/25.
//
#include "iostream"

using namespace std;

int main() {
    int n;
    cin >> n;
    unsigned long long sum = 0, sum2 = 0;
    for (int i = 100; i <= n; i++) {
        if (((i / 100) * (i / 100) * (i / 100) +
             (i % 10) * (i % 10) * (i % 10) +
             (i / 10 % 10) * (i / 10 % 10) * (i / 10 % 10)
            ) == i) {
            sum++;
            sum2 += i;
        }
    }
    cout << sum << " " << sum2;
    return 0;
}
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, sum = 0, item;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> item;
            if (j <= i)
                sum += item;
        }
    cout << sum;

    return 0;
}
//
// Created by yanyu on 2023/10/1.
//

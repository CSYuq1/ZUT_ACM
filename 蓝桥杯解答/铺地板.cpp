//
// Created by lenovo on 2023/11/4.
//
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        if ( ! (a * b % 6) && (a > 1 && b > 1))
            cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
    return 0;
}
//
// Created by lenovo on 2023/10/21.
//
#include "iostream"

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n;
    cin >> m >> n;
    int a[11][11];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    for (int i = 0; i < n; i++) {
        cout << '\n';
        for (int j = 0; j < m; j++) {
            cout << a[j][i] << " ";
        }
    }
    return 0;
}
//
// Created by yanyuqi on 2023/10/14.
//
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char c[] = {'D', 'C', 'B', 'A', 'A'};
    int grade;
    cin >> grade;
    if (grade < 60)
        cout << 'E' << '\n';
    else cout << c[grade / 10 - 6] << '\n';
    return 0;

}
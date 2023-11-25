//
// Created by 19003 on 2023/11/25.
//
#include "iostream"

using namespace std;

int main() {
    int a, b, c;
    string ch;
    cin >> a >> b >> c;
    if ((a + b) > c &&
        (a + c) > b &&
        (b + c) > a)
        ch = "Y";
    else
        ch = "N";
    cout << a << '-' << b << '-' << c << ch;
    return 0;
}
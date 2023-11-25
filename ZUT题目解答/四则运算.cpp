//
// Created by 19003 on 2023/11/25.
//
#include"iostream"

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double s1, s2;
    char op;
    cin >> s1 >> op >> s2;
    if (op == '/' && s2 == 0) {
        cout << "Wrong input!";
        return 0;
    }
    switch (op) {
        case '+':
            cout << s1 + s2;
        case '-':
            cout << s1 - s2;
        case '*':
            cout << s1 * s2;
            break;
    }
    return 0;
}
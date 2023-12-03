//
// Created by 19003 on 2023/12/3.
//
#include "iostream"

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin >> str;
    int num[26] = {0};
    for (int i = 0; i < str.length(); i++) {
        num[str[i] - 'a']++;
    }
    int max = -1;
    int index;
    for (int i = 0; i < 26; i++) {
        if (num[i] > max) {
            index = i;
            max = num[i];
        }
    }
    char ch = index + 'a';
    cout << ch << endl << max;

}
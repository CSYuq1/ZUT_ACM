//
// Created by yanyuqi on 2023/8/21.
//
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    while (scanf("%d%d%d", &a, &b, &c) != EOF)
        for (int i = 0; i * 7 < 100; i++) {
            unsigned int num = i * 7 + c;
            if (num % 3 == a && num % 4 == c) {
                cout << num << ";";
            }
        }
    return 0;
}
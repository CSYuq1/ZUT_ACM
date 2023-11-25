//
// Created by 19003 on 2023/11/25.
//
#include "iostream"

using namespace std;

int main() {
    int n, in, max = 0, min = 999999999;
    cin >> n;
    while (n--) {
        cin >> in;
        if (in > max)
            max = in;
        if (in < min)
            min = in;
    }
    cout << min << '\n' << max << '\n';
    return 0;
}
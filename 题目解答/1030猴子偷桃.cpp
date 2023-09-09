//
// Created by lenovo on 2023/9/9.
//
#include <iostream>

using namespace std;

/*
 * by yanyuqi
 */
int main() {
    unsigned int n, counts = 1;
    cin >> n;
    for (int i = n; i > 1; i--)

        counts = (counts + 1) * 2;

    cout << counts;
    return 0;
}
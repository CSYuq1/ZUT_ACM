//
// Created by yanyu on 2023/9/29.
//
#include "iostream"

int main() {
    unsigned int n, low = 0, mid, high = 21;
    unsigned int num[22] = {84, 126, 168, 210, 252, 294, 336, 378, 420, 462, 504, 546, 588, 630, 672, 714, 756, 798,
                            840, 882, 924, 966};
    //100以内有2个符合的数字
    std::ios::sync_with_stdio(false);
    std::cin >> n;
    while (low != high - 1) {
        mid = (low + high) / 2;
        if (n < num[mid])
            high = mid;
        else
            low = mid;
    }
    unsigned int count = n < num[high] ? low : high;
    std::cout << count ;
    return 0;
}

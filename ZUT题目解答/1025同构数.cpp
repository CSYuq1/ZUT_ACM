//
// Created by yanyuqi on 2023/8/20.
//
#include <iostream>

using namespace std;

int main() {
    unsigned int n,num=0;
    cin >> n;
    for (unsigned int i = 1; i < n; i++) {
        unsigned int number = i;//size代表位数
        unsigned int size=1;
        while (number != 0) {
            number /= 10;
            size*=10;
        }
        if((i*i-i)%size==0) num++;
    }
    cout<<num;

    return 0;
}
//
// Created by yanyu on 2023/10/2.
//
#include <iostream>
#include<iomanip>
#include <bitset>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a[2];
    while (cin >> a[0] >> a[1]) {
        if(a[0]<0)
            cout<<'-';
        a[0]=abs(a[0]);
        if (a[1] > 10) {
            cout << setbase(16) << a[0];
        } else {
            bitset<32> bits(a[0]);
            cout << bits.to_string().substr(bits.to_string().find('1', 1));
        }
        cout << '\n';
    }
    return 0;
}
//
// Created by 19003 on 2023/11/25.
//
#include "iostream"

using namespace std;
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}
int main() {

    int m;
    cin >> m;
    for(int i=1;i<=m;i++) {
        int n, num;
        unsigned long long sum = 0;
        cin >> n;
        for(int i=1;i<=n;i++) {
            cin >> num;
            if(isPrime(num))
                sum += num;
        }
        cout << sum << endl;

    }
    return 0;
}
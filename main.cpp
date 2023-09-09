
#include<stdio.h>
#include <iostream>

using namespace std;
int frog(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    return frog(n - 1) + frog(n - 2);
}

int main() {
    int n, num;
    cin>>n;
    for (int i = 0; i <= n; i++) {
        scanf("%d", &num);
        int ways = frog(num-1);
        printf("%d\n", ways);
    }

    return 0;
}
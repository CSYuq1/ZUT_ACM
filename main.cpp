#include <iostream>

using namespace std;

/*
 * by yanyuqi
 */
int main() {
    int num, zhen = 0, fu = 0;
    while (true) {
        cin >> num;
        if (num == 0) break;
        else if (num > 0) zhen++;
        else fu++;
    }
    printf("%d %d", zhen, fu);

    return 0;
} 
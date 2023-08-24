#include <iostream>

using namespace std;
/*
 * by yanyuqi
 */
int main() {
    int i = 1;
    int sum = 0;
    while (i <= 50) {
       sum=sum-1;//奇数项和偶数项一起算，两项合并，每次减一
        i++;
    }
    cout << sum << endl;
   // printf("50");
    return 0;
} 
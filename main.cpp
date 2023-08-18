//
// Created by yanyuqi on 2023/8/18.
//
#include <iostream>

using namespace std;

int main() {
    unsigned int big, small;
    while (scanf("%d%d", &big, &small) != EOF) {
        unsigned int counts = 0;
        for (int i = 0; i <= 100 / big; i++)
            for (int j = 0; j <= (100 - big * i) / small; j++) {
                unsigned int super_small =2*(100-big*i-small*j);
                if (i + j + super_small == 100 ) counts++;
            }
        if (!counts)
            printf("no solution\n");
        else
            printf("%d\n", counts);
    }
    return 0;
}
//
// Created by yanyuqi on 2023/8/18.
//
#include <iostream>

using namespace std;

int main() {
    double array[4] = {1, 2, 3, 3};//数组的处理只需要3+1项，把它们放在一个首尾相接的数组中，index记录当前下标
    unsigned  index = 4,counts;//
    double n;
    cin>>n;
    do {index++;
        array[index % 4] = (array[(index + 1) % 4] +
                            array[(index + 2) % 4] +
                            array[(index + 3) % 4]) / 2;
    } while (array[index%4] <= n);
    printf("%d", index-1);
    return 0;
}
//
// Created by lenovo on 2023/11/4.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, cut_size;
    cin >> n >> cut_size;


    int drop[n];//定义一个数组，计算各个元素之间的落差
    drop[0]=0;


    int start, last, now, drop_sum = 0;//循环输入使用
    cin >> last;//先输入第一个元素，因为第一个元素和之前的元素没有落差
    start = last;//第一个元素额外储存，最后计算总落差需要使用
    for (int i = 1; i < n; i++) {
        cin >> now;
        drop[i] = now - last;//当前元素减去上个元素即为落差
        last = now;
    }


    sort(drop, drop + n);//排序得到最大的几个落差
    while (--cut_size && --n)
        drop_sum += drop[n];//数组最后几个元素是最大的落差————把它们加到drop_sum
    cout << last - start - drop_sum;//总落差减去 最大落差和
    return 0;
}
//
// Created by yanyuqi on 2023/8/18.
//
#include <iostream>
#include <iomanip>//小数格式化输出需要
#include "cmath"
using namespace std;

int main() {
    float a, b, c;//对应三个参数
    char c1,c2;
    cin >> a >>c1>> b >>c2>> c;
    float
            x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a),
            x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << fixed << setprecision(2) <<"x1="<< x1 << "\nx2=" << x2;
    return 0;
}

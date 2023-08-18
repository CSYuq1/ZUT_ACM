//
// Created by yanyuqi on 2023/8/18.
//
#include <iostream>
using namespace std;
/*
 * 辗转相除法求出最小公约数
 * https://www.runoob.com/cplusplus/cpp-examples-lcm.html
 */
unsigned  int  gcd(unsigned int a,unsigned  b){
    return b?gcd(b,a%b):a;
}
int main(){
    unsigned  int a,b;
    cin>>a>>b;
    cout<<a*b/gcd(a,b);
    return  0;
}
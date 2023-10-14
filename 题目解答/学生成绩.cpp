//
// Created by lenovo on 2023/10/14.
//
#include <iostream>

using namespace std;
int main(){
    char c[]={'D','C','B','A','A'};
    int  grade;
    cin>>grade;
    if(grade<60)
        cout<<'E';
    else cout<<c[grade/10-6];
    return 0;

}
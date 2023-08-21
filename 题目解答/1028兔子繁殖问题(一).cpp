//
// Created by yanyu on 2023/8/21.
//
#include<iostream>

using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int a=1,b=1,c=1,i=3;
    while(i<=n){
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    printf("%d",c);
    return 0;
}
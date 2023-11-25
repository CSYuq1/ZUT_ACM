//
// Created by 19003 on 2023/11/25.
//
#include "iostream"
#include "iomanip"
using namespace std;

int main(){
    float money;
    cin>>money;
    double sale[6]={1,0.95,0.9,0.85,0.85,0.8};
    if(money>6000)
        cout<<fixed<<setprecision(2)<<money*0.8;
    else cout<<money*sale[money/1000];
    return 0;
}
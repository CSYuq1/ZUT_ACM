//
// Created by yanyuqi on 2023/8/21.
//
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    char item[3];
    while(scanf("%s",item)!=EOF){
        sort(item,item+3);
        cout<<item[0]<<" "<<item[1]<<" "<<item[2]<<endl;
    }
    return 0;
}
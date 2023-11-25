//
// Created by 19003 on 2023/11/25.
//
#include <iostream>

using namespace std;

int main(){
    int n;
    string input;
    cin>>n;
    while(n--){
        cin>>input;
        bool ishw=true;
        for(int i=0, j=input.length();i!=j;i++,j--){
            if(input[i]!=input[j])
            {
                ishw=false;
                break;
            }
        }
        if(ishw) cout<<"Yes";
        else cout<<"No";
    }
    return 0;
}

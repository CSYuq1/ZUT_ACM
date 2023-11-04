//
// Created by lenovo on 2023/10/5.
//
#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, need_num,input;
    cin >> n;
    cin >> need_num;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        if(input==need_num)
        {
            cout<<i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}

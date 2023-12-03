//
// Created by 19003 on 2023/12/3.
//
//
// Created by 19003 on 2023/12/3.
//
#include "iostream"

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int *now = new int[10000];
    int *last = new int[10000];
    int n;
    cin >> n;
    int num = 1;
    last[1] = 1;
    while (num++) {

        now[1] = last[1];
        for (int i = 2; i < num; i++) {
            now[i] = last[i - 1] + last[i];

            if(now[i]==n){
                cout<<
            }
        }
        now[num] = last[num - 1];
    }
    return 0;

}
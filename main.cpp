//
// Created by 19003 on 2023/12/9.
//
#include "iostream"
#include "vector"

int main() {
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int month[12]={31};
    month[2]=28;
    month[4]= month[6]= month[9]= month[11]=30;
    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        vector<string> Students;
        Students.reserve(m);
        for (auto &s: Students)
            cin >> s;


    }
}
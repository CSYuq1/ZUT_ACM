//
// Created by 19003 on 2023/12/9.
//
#include "iostream"
#include "vector"

int main() {
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m[12]={31};
    m[2]=28;
    m[4]=m[6]=m[9]=m[11]=30;
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
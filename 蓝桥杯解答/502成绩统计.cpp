//
// Created by 19003 on 2023/12/3.
//
#include "iostream"
#include "iomanip"

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    double grade;
    double nice_num = 0, stupid_num = 0;
    for (int i = n; i--;) {
        cin >> grade;
        if (grade >= 85)
            nice_num += 1.0 / n;
        if (grade < 60)
            stupid_num += 1.0 / n;
    }
    cout << fixed << setprecision(0) << ((1.0 - stupid_num) * 100) << "%\n" << nice_num * 100 << "%\n";
    return 0;

}
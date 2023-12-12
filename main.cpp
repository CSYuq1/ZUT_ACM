//
// Created by 19003 on 2023/12/9.
//
#include "iostream"
#include "vector"
#include "string"
#include "algorithm"

int main() {
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        vector<string> S(m);
        for (auto &s: S)
            cin >> s;
        string target_name;
        int target_day;
        cin >> target_name >> target_day;
        auto item = find(S.begin(), S.end(), target_name);
        auto target_index = distance(S.begin(), item);
        cout << S[(target_index + target_day + 333) % m] << '\n';
        //S.clear();
    }
}
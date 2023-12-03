
#include "iostream"

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int *now = new int[5000000];
    int *last = new int[5000000];
    int n;
    cin >> n;
    if (n == 1) {//处理边界
        cout << 1;
        return 0;
    }
    int row = 1;
    last[1] = 1;
    while (row++) {//循环只需要算三角的一半
        now[1] = 1;
        for (int i = 2; i < (row + 1) / 2; i++) {
            now[i] = last[i - 1] + last[i];
        }
        if ((row - 1) % 2) now[row] = last[(row - 1) / 2] * 2;
        else now[row] = last[row / 2] + last[row / 2 - 1];
        swap(now, last);
    }
    return 0;
}
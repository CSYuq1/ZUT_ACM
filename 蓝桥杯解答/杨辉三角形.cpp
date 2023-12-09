
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
    int row = 2;
    now[1] = last[1] = 1;
    now[0] = last[0] = 0;
    while (row<=44732) {//循环只需要算三角的一半
        int final = (row + 1) / 2;//防止自己混淆，每一行需要处理的最后一个数字下标
        for (int i = 2; i < final; i++) {//每行的最后一个元素要根据奇偶性做出判断，先处理前面的元素
            now[i] = last[i - 1] + last[i];
            if (now[i] == n) {//找到数字后
                cout << row * (row - 1) / 2 + i;//前面行所有数字的数量加上当前行的数字量
                return 0;
            }
        }
        now[final] = row % 2 ?
                     last[final - 1] * 2 :
                     last[final] + last[final - 1];
        if (now[final] == n) {
            cout << row * (row - 1) / 2 + final;
            return 0;
        }
        swap(now, last);
        row++;
    }

    return 0;
}
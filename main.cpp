//
// Created by lenovo on 2023/11/4.
//n
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, cut_size;
    cin >> n >> cut_size;


    int drop[n];//����һ�����飬�������Ԫ��֮������
    drop[0]=0;


    int start, last, now, drop_sum = 0;//ѭ������ʹ��
    cin >> last;//�������һ��Ԫ�أ���Ϊ��һ��Ԫ�غ�֮ǰ��Ԫ��û�����
    start = last;//��һ��Ԫ�ض��ⴢ�棬�������������Ҫʹ��
    for (int i = 1; i < n; i++) {
        cin >> now;
        drop[i] = now - last;//��ǰԪ�ؼ�ȥ�ϸ�Ԫ�ؼ�Ϊ���
        last = now;
    }


    sort(drop, drop + n);//����õ����ļ������
    while (--cut_size && --n)
        drop_sum += drop[n];//������󼸸�Ԫ���������������������Ǽӵ�drop_sum
    cout << last - start - drop_sum;//������ȥ �������
    return 0;
}
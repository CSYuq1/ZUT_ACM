//
// Created by 19003 on 2023/12/2.
//
#include "iostream"
#include "memory"
using namespace std;
int main(){
    unique_ptr<int> x= make_unique<int>();
    return 0;
}
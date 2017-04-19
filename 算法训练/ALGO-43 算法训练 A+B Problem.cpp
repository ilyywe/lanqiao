ALGO-43 算法训练 A+B Problem
问题描述
　　输入A,B。
　　输出A+B。
输入格式
　　输入包含两个整数A,B，用一个空格分隔。
输出格式
　　输出一个整数，表示A+B的值。
样例输入
5 8
样例输出
13
数据规模和约定
　　-1,000,000,000<=A,B<=1,000,000,000。

#include <iostream>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    cout << A + B;
    return 0;
}
ADV-175 算法提高 三个整数的排序   
问题描述
　　﻿输入三个数，比较其大小，并从大到小输出。
输入格式
　　一行三个整数。
输出格式
　　一行三个整数，从大到小排序。
样例输入
33 88 77
样例输出
88 77 33

#include <iostream>
using namespace std;
int main() {
    int a, b, c, t;
    cin >> a >> b >> c;
    if (a < b)
        swap(a, b);
    if (b < c)
        swap(b, c);
    if (a < b)
        swap(a, b);
    cout << a << " " << b << " " << c;
    return 0;
}

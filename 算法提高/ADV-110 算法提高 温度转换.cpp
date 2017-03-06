ADV-110 算法提高 温度转换
问题描述
　　编写一个程序，输入一个摄氏温度，输出相应的华氏温度。在输出时，保留小数点后面两位。
　　输入格式：输入只有一个整数，即摄氏温度。
　　输出格式：输出只有一实数，即相应的华氏温度。
　　输入输出样例
样例输入
35
样例输出
95.00

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int a;
    cin >> a;
    double b = a * 1.8 + 32;
    printf("%.2f", b);
    return 0;
}
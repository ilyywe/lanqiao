ADV-75 算法提高 简单计算器
问题描述
　　编程模拟计算器的加、减、乘、除功能，根据用户输入的运算符，对两个数进行运算。(要求switch语句)
输入格式
　　输入只有一行，用空格隔开的运算符和两个运算数，运算符一定是+, -, *, /之一，运算数一定是绝对值不超过200的整数，当运算符为除号时，除数不为0并第一个数一定是第二个数的整数倍。
输出格式
　　输出只有一行，包含一个整数，表示运算结果。
样例输入
/ 6 2
样例输出
3

#include <iostream>
using namespace std;
int main() {
    char c;
    int a, b;
    cin >> c >> a >> b;
    switch(c) {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            cout << a / b;
            break;
    }
    return 0;
}
 算法提高 数的运算  
 输入一个正整数（范围[1..10000]），打印其平方（不保留小数位）、平方根、倒数。(用指针实现，保留2位小数，输出每个数之间以一个空格隔开)
样例输入
2
样例输出
4 1.41 0.50

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
void func1(int *p) {
    cout << (*p)*(*p) << " ";
}

void func2(int *p) {
    printf("%.2lf ", sqrt(*p));
}

void func3(int *p) {
    printf("%.2lf", 1.0 / (*p));
}

int main() {
    int n;
    cin >> n;
    int *p = &n;
    func1(p);
    func2(p);
    func3(p);
    return 0;
}
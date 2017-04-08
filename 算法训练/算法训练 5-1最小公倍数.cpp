算法训练 5-1最小公倍数
问题描述
　　编写一函数lcm，求两个正整数的最小公倍数。
样例输入
一个满足题目要求的输入范例。
例：
3 5
样例输出
与上面的样例输入对应的输出。
例：
15
数据规模和约定
　　输入数据中每一个数的范围。
　　例：两个数都小于65536。

分析：辗转相除法求最大公约数，乘积除以最大公约数等于最小公倍数～

#include <iostream>
using namespace std;
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a%b);
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << a * b / gcd(a, b);
    return 0;
}
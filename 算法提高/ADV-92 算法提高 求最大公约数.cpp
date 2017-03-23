ADV-92 算法提高 求最大公约数
编写一函数gcd，求两个正整数的最大公约数。
样例输入: 
5 15
样例输出:
5
样例输入: 
7 2
样例输出:
1

#include <iostream>
using namespace std;
int gcd(int a, int b) {
    return b == 0? a : gcd(b, a%b);
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}
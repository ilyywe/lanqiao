算法提高 复数归一化
编写函数Normalize，将复数归一化，即若复数为a+bi，归一化结果为a/sqrt(a*a+b*b) + i*b/sqrt(a*a+b*b) 。使用结构体指针类型作为函数参数可能是必要的。其中实部和虚部由键盘输入，输出为归一化结果，如果归一化结果的实部或虚部为小数的要求保留一位小数。

样例输入:（格式说明：3 4 分别为以空格隔开的实数的实部和虚部） 
3 4 
样例输出:
0.6+0.8i
样例输入: 
2 5
样例输出:
0.4+0.9i

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double a, b;
    double p, q;
    cin >> a >> b;
    p = a / sqrt(a * a + b * b);
    q = b / sqrt(a * a + b * b);
    cout << setprecision(1) << p;
    if(q > 0) {
        cout << "+";
        cout << setprecision(1) << q;
        cout.unsetf(ios_base::floatfield);
        cout << "i";
    } else if(q < 0) {
        cout << setprecision(1) << q;
        cout.unsetf(ios_base::floatfield);
        cout << "i";
    }
    return 0;
}
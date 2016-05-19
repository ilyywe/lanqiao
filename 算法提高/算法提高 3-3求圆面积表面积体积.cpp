算法提高 3-3求圆面积表面积体积 
问题描述
　　接受用户输⼊的数值，输出以该值为半径的(1)圆面积，(2)球体表面积，(3)球体体积。pi 取值3.1415926536 ，结果保留10位小数，每一列占20个字符，左对齐。
样例输入
一个满足题目要求的输入范例。
例：
1
样例输出
与上面的样例输入对应的输出。
例：(第一行1是输入，第二行是输出)

数据规模和约定
　　所有结果在double类型的表示范围内。

#include <iostream>
#define pi 3.1415926536
using namespace std;
int main() {
    double a, b, c;
    double r;
    cin >> r;
    a = pi * r * r;
    b = 4 * pi * r * r;
    c = 4.0 / 3 * pi * r * r * r;
    printf("%-20.10lf%-20.10lf%-20.10lf", a, b, c);
    return 0;
}
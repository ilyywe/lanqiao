算法提高 三角形面积
问题描述
　　由三角形的三边长，求其面积。
　　提示：由三角形的三边a,b,c求面积可以用如下的公式：
　　海伦公式（秦九昭公式）
　　面积=
输入格式
　　由空格分开的三个整数。
输出格式
　　一个实数，保留两位小数。
样例输入
3 4 5
样例输出
6.00
数据规模和约定
　　输入的三条边一定能构成三角形，不用进行判定。a,b,c小于1000

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2.0;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.2f", area);
    return 0;
}

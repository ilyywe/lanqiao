算法提高 解二元一次方程组
问题描述
　　给定一个二元一次方程组，形如：
　　a * x + b * y = c;
　　d * x + e * y = f;
　　x,y代表未知数，a, b, c, d, e, f为参数。
　　求解x,y
输入格式
　　输入包含六个整数: a, b, c, d, e, f;
输出格式
　　输出为方程组的解，两个整数x, y。
样例输入
例：
3 7 41 2 1 9
样例输出
例：
2 5
数据规模和约定
　　0 <= a, b, c, d, e, f <= 2147483647

#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, e, f;
	cin >>a >>b >> c >> d >> e >> f;
	long long int x, y;
	y = (c * d - f * a) / (b * d - e * a);
	x = (c - b * y) / a;
	cout << x << " " << y;
	return 0;
}
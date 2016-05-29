算法提高 GDP计算
问题描述
　　设我国国民生产总值的年增产率为10%，计算n年后我国国民生产总值与现在的比是多少。计算公式为：P=(1+r)^n, r为年增产率，n为年数，P为n年后国民生产总值与现在相比的倍数。
输入格式
　　输入一个数n(1 <= n <= 300)。
输出格式
　　输出一个数P，保留2位小数。
样例输入
10
样例输出
2.59

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main() {
	int n;
	cin >> n;
	double ans = pow(1.1, n);
	printf("%.2lf", ans);
	return 0;
}
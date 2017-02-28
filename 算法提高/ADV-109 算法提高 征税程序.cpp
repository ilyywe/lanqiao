算法提高 征税程序
问题描述
　　税务局希望你帮他们编写一个征税程序，该程序的功能是：首先输入某公司的年销售额sale和税率rate，然后程序将计算出相应的税额tax，并把它显示在屏幕上。计算公式是：
　　tax = sale * rate。
　　输入格式：输入只有一行，包括两个数据，即年销售额和税率。
　　输出格式：输出只有一行，包括一个实数，即相应的税额，保留到小数点后两位。
　　输入输出样例
样例输入
50000.5 0.1
样例输出
5000.50

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	double sale, rate;
	cin >> sale >> rate;
	double tax = sale * rate;
	printf("%.2f", tax);
	return 0;
}
算法提高 选最大数
输入3个整数a、b、c，（数的范围是[1,10000]）输出其中最大的数。(用指针实现)
样例输入
2 5 1
样例输出
5

#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int *p = a;
	if(*p < b)
		p = &b;
	if(*p < c)
		p = &c;
	return 0;
}
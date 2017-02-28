算法提高 算术运算
编写一程序，接受用户输入的两个整数，并计算它们的和、差、
积、商，程序运行时候输入输出例子如下所示。
样例输入：
3  5
样例输出：
3+5=8
3-5=-2
3*5=15
3/5=0
注意：输出要严格按照+-* /的顺序，分四行输出，而且中间不能有空格，否则系统会判为错误。

#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout << a << "+" << b << "=" << a+b << endl;
	cout << a << "-" << b << "=" << a-b << endl;
	cout << a << "*" << b << "=" << a*b << endl;
	cout << a << "/" << b << "=" << a/b << endl;
	return 0;
}

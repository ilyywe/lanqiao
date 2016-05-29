算法训练 大小写判断  
问题描述
　　给定一个英文字母判断这个字母是大写还是小写。
输入格式
　　输入只包含一个英文字母c。
输出格式
　　如果c是大写字母，输出“upper”，否则输出“lower”。
样例输入
x
样例输出
lower
样例输入
B
样例输出
upper

#include <iostream>
#include <cctype>
using namespace std;
int main() {
	char c;
	cin >> c;
	if(isupper(c)) {
		cout << "upper";
	} else {
		cout << "lower";
	}
	return 0;
}
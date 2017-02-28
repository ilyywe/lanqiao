算法训练 判定数字
　　编写函数，判断某个给定字符是否为数字。
样例输入
9
样例输出
yes

#include <iostream>
#include <cctype>
using namespace std;
int main() {
	char c;
	cin >> c;
	if(isdigit(c)) {
		cout << "yes";
	} else {
		cout << "no";
	}
	return 0;
}
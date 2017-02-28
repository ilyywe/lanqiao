算法训练 字符串逆序 
输入一个字符串，长度在100以内，按相反次序输出其中的所有字符。
样例输入
tsinghua
样例输出
auhgnist

#include <iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	for(int i = s.length() - 1; i >= 0; i--) {
		cout << s[i];
	}
	return 0;
}
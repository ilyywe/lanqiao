算法训练 确定元音字母位置
输入一个字符串，编写程序输出该字符串中元音字母的首次出现位置，如果没有元音字母输出0。英语元音字母只有‘a’、‘e’、‘i’、‘o’、‘u’五个。
样例输入: 
hello
样例输出:
2
样例输入: 
apple
样例输出:
1
样例输入: 
pmp
样例输出:
0

#include <iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
			cout << i+1;
			return 0;
		}
	}
	cout << 0;
	return 0;
}
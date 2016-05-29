算法训练 6-3判定字符位置 
　返回给定字符串s中元音字母的首次出现位置。英语元音字母只有‘a’、‘e’、‘i’、‘o’、‘u’五个。
　　若字符串中没有元音字母，则返回0。
　　只考虑小写的情况。
样例输入
and
样例输出
1

#include <iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
			cout << i+1;
			return 0;
		}
	}
	cout << 0;
	return 0;
}
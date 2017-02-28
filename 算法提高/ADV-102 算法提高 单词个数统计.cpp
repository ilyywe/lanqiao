算法提高 单词个数统计
问题描述
　　编写一个程序，输入一个字符串（长度不超过80），然后统计出该字符串当中包含有多少个单词。例如：字符串“this is a book”当中包含有4个单词。
　　输入格式：输入一个字符串，由若干个单词组成，单词之间用一个空格隔开。
　　输出格式：输出一个整数，即单词的个数。
　　输入输出样例
　　用户输入数据样例：
　　this is a book
　　系统输出数据如下：
　　4

#include <iostream>
using namespace std;
int main() {
	string s;
	int cnt = 0;
	while(cin >> s) {
		cnt++;
	}
	cout << cnt;
	return 0;
}
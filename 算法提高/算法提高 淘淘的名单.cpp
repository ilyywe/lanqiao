算法提高 淘淘的名单 
问题描述
　　by ZBY... :) 淘淘拿到了一份名单，他想对上面的名字进行处理，挑出一些特殊的名字，他请你来帮忙。
　　淘淘关注以下名字：
　　如果这个名字是“WYS”，他希望你的程序输出“KXZSMR”。
　　如果这个名字是“CQ”，他希望你的程序输出“CHAIQIANG”。
　　如果这个名字是“LC“，他希望你的程序输出“DRAGONNET”。
　　如果这个名字是“SYT”或“SSD”或“LSS”或“LYF”，他希望你的程序输出“STUDYFATHER”。
　　如果这个名字与上述任意名字都不相同，他希望你的程序输出“DENOMINATOR”。
输入格式
　　第一行有一个整数N，表示淘淘手中名单里的人数。
　　接下来N行，每行有一个字符串，即名单里的人名。
输出格式
　　输出N行，每行输出每个人名的判断结果。
样例输入
9
WYS
CQ
WYS
LC
SYT
SSD
LSS
LYF
ZBY
样例输出
KXZSMR
CHAIQIANG
KXZSMR
DRAGONNET
STUDYFATHER
STUDYFATHER
STUDYFATHER
STUDYFATHER
DENOMINATOR
数据规模和约定
　　对于 50% 数据，N <= 1000，且名单中的名字仅可能为“WYS”,“CQ”,“LC”三者之一，没有其他的名字。
　　对于 100% 数据，N <= 10000，人名仅由大写字母组成，长度不超过5。

#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	string s;
	for(int i = 0; i < n; i++) {
		cin >> s;
		if(s == "WYS") {
			cout << "KXZSMR" << endl;
		} else if(s == "CQ") {
			cout << "CHAIQIANG" << endl;
		} else if(s == "LC") {
			cout << "DRAGONNET" << endl;
		} else if(s == "SSD" || s == "LSS" || s == "LYF" || s == "SYT") {
			cout << "STUDYFATHER" << endl;
		} else {
			cout << "DENOMINATOR" << endl;
		}
	}
	return 0;
}
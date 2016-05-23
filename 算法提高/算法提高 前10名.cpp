算法提高 前10名
问题描述
　　数据很多，但我们经常只取前几名，比如奥运只取前3名。现在我们有n个数据，请按从大到小的顺序，输出前10个名数据。
输入格式
　　两行。
　　第一行一个整数n，表示要对多少个数据
　　第二行有n个整数，中间用空格分隔。表示n个数据。
输出格式
　　一行，按从大到小排列的前10个数据，每个数据之间用一个空格隔开。
样例输入
26
54 27 87 16 63 40 40 22 61 6 57 70 0 42 11 50 13 5 56 7 8 86 56 91 68 59
样例输出
91 87 86 70 68 63 61 59 57 56
数据规模和约定
　　10<=n<=200,各个整数不超出整型范围

#include <iostream>
#include <algorithm>
using namespace std;
int cmp1(int a, int b) {return a > b;}
int main() {
	int n;
	cin >> n;
	int *a = new int[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+n, cmp1);
	for(int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
算法提高 冒泡法排序
输入10个数，用“冒泡法”对10个数排序（由小到大）这10个数字在100以内。
样例输入
1 3 6 8 2 7 9 0 4 5
样例输出
0 1 2 3 4 5 6 7 8 9

#include <iostream>
using namespace std;
int main() {
	int a[10];
	for(int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9 - i; j++) {
			if(a[j] > a[j+1]) {
				swap(a[j], a[j+1]);
			}
		}
	}
	for(int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
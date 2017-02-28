 算法提高 夺宝奇兵
 [题目描述]
　　在一座山上,有很多很多珠宝,它们散落在山底通往山顶的每条道路上,不同道路上的珠宝的数目也各不相同.下图为一张藏宝地图:

　　7
　　3 8
　　8 1 0
　　2 7 4 4
　　4 5 2 6 5

　　”夺宝奇兵”从山下出发,到达山顶,如何选路才能得到最多的珠宝呢?在上图所示例子中,按照5->7->8->3->7的顺序,将得到最大值30

[输入]
　　第一行正整数N(100>=N>1),表示山的高度
　　接下来有N行非负整数,第i行有i个整数(1<=i<=N),表示山的第i层上从左到右每条路上的珠宝数目

[输出]
　　一个整数,表示从山底到山顶的所能得到的珠宝的最大数目.
[样例输入]
5
7
3 8
8 1 0 
2 7 4 4
4 5 2 6 5

[样例输出]
　　30

#include <iostream>
using namespace std;
#define max(a, b) a > b ? a : b
int main() {
	int n;
	cin >> n;
	int a[101][101];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++) {
			cin >> a[i][j];
		}
	}
	int ans = 0;
	for(int i = 1; i < n; i++) {
		for(int j = 0; j <= i; j++) {
			if(j == 0)
				a[i][j] += a[i-1][j];
			else if(j == i)
				a[i][j] += a[i-1][j-1];
			else
				a[i][j] += max(a[i-1][j-1], a[i-1][j]);
		}
	}
	for(int i = 1; i < n; i++) {
		ans = ans > a[n-1][i] ? ans : a[n-1][i];
	}
	cout << ans;
	return 0;
}
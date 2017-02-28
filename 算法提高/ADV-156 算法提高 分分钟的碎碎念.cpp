算法提高 分分钟的碎碎念
问题描述
　　以前有个孩子，他分分钟都在碎碎念。不过，他的念头之间是有因果关系的。他会在本子里记录每一个念头，并用箭头画出这个念头的来源于之前的哪一个念头。翻开这个本子，你一定会被互相穿梭的箭头给搅晕，现在他希望你用程序计算出这些念头中最长的一条因果链。
　　将念头从1到n编号，念头i来源于念头from[i]，保证from[i]<i，from[i]=0表示该念头没有来源念头，只是脑袋一抽，灵光一现。
输入格式
　　第一行一个正整数n表示念头的数量
　　接下来n行依次给出from[1]，from[2]，…，from[n]
输出格式
　　共一行，一个正整数L表示最长的念头因果链中的念头数量
样例输入
8
0
1
0
3
2
4
2
4
样例输出
3
样例说明
　　最长的因果链有：
　　1->2->5 (from[5]=2,from[2]=1,from[1]=0)
　　1->2->7 (from[7]=2,from[2]=1,from[1]=0)
　　3->4->6 (from[6]=4,from[4]=3,from[3]=0)
　　3->4->8 (from[8]=4,from[4]=3,from[3]=0)
数据规模和约定
　　1<=n<=1000

#include <iostream>
#include <cstdio>
#define max(a, b) (a) > (b) ? (a) : (b)
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	int *dp = new int[n+1];
	int *from = new int[n+1];
	for(int i = 1; i <= n; i++) {
		scanf("%d", &from[i]);
	}
	dp[0] = 0;
	int maxvalue = 0;
	for(int i = 1; i <= n; i++) {
		dp[i] = dp[from[i]] + 1;
		maxvalue = max(maxvalue, dp[i]);
	}
	cout << maxvalue;
	delete [] dp;
	delete [] a;
}
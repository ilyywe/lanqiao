算法提高 快乐司机
问题描述
　　"嘟嘟嘟嘟嘟嘟
　　喇叭响
　　我是汽车小司机
　　我是小司机
　　我为祖国运输忙
　　运输忙"
　　这是儿歌“快乐的小司机”。话说现在当司机光有红心不行，还要多拉快跑。多拉不是超载，是要让所载货物价值最大，特别是在当前油价日新月异的时候。司机所拉货物为散货，如大米、面粉、沙石、泥土......
　　现在知道了汽车核载重量为w，可供选择的物品的数量n。每个物品的重量为gi,价值为pi。求汽车可装载的最大价值。（n<10000,w<10000,0<gi<=100,0<=pi<=100)
输入格式
　　输入第一行为由空格分开的两个整数n w
　　第二行到第n+1行，每行有两个整数，由空格分开，分别表示gi和pi
输出格式
　　最大价值（保留一位小数）
样例输入
5 36
99 87
68 36
79 43
75 94
7 35
样例输出
71.3
解释：
先装第5号物品，得价值35，占用重量7
再装第4号物品，得价值36.346,占用重量29
最后保留一位小数，得71.3

#include <iostream>
#include <cstdio>
using namespace std;
struct node {
	int a;
	int b;
	double c;
};
int cmp1(node t1, node t2) {
	return t1.c > t2.c;
}
int main() {
	int n, w;
	node * arr = new int [n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i].a >> arr[i].b;
		arr[i].c =arr[i].b *1.0 / arr[i].a; 
	}
	sort(arr, arr+n, cmp1);
	double ans = 0.0;
	int j = 0;
	while(w > 0) {
		if(arr[j].a < w) {
			w = w - arr[j].a;
			ans = ans + arr[j].b;
		} else {
			ans = ans + w * 1.0 / arr[j].a * arr[j].b; 
			w = 0;
		}
		j++;
	}
	printf("%.1f", ans);
	return 0;
}
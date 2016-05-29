算法训练 王、后传说
问题描述
　　地球人都知道，在国际象棋中，后如同太阳，光芒四射，威风八面，它能控制横、坚、斜线位置。
　　看过清宫戏的中国人都知道，后宫乃步步惊心的险恶之地。各皇后都有自己的势力范围，但也总能找到相安无事的办法。
　　所有中国人都知道，皇权神圣，伴君如伴虎，触龙颜者死......
　　现在有一个n*n的皇宫，国王占据他所在位置及周围的共9个格子，这些格子皇后不能使用（如果国王在王宫的边上，占用的格子可能不到9个）。当然，皇后也不会攻击国王。
　　现在知道了国王的位置（x,y）（国王位于第x行第y列，x,y的起始行和列为1），请问，有多少种方案放置n个皇后，使她们不能互相攻击。
输入格式
　　一行，三个整数，皇宫的规模及表示国王的位置
输出格式
　　一个整数，表示放置n个皇后的方案数
样例输入
8 2 2
样例输出
10
数据规模和约定
　　n<=12

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int n, x, y;
int cnt = 0;

bool issafe(vector<int> &pos, int row) {
	if((pos[row] == y-1 || pos[row] == y || pos[row] == y+1) && (row == x-1 || row == x || row == x+1))
		return false;
	for(int i = 0; i < row; i++) {
		if(pos[i] == pos[row] || abs(pos[i] - pos[row]) == abs(i - row)) {
			return false;
		}
	}
	return true;
}

void dfs(vector<int> &pos, int row) {
	if(row == n) {
		cnt++;
		return ;
	}
	for(pos[row] = 0; pos[row] < n; pos[row]++) {
		if(issafe(pos, row)) {
			dfs(pos, row + 1);
		}
	}
}

int main(){
	cin >> n >> x >> y;
	vector<int> pos(n);
	dfs(pos, 0);
	cout << cnt;
	return 0;
}
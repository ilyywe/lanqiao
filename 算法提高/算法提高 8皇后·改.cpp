算法提高 8皇后·改
问题描述
　　规则同8皇后问题，但是棋盘上每格都有一个数字，要求八皇后所在格子数字之和最大。
输入格式
　　一个8*8的棋盘。
输出格式
　　所能得到的最大数字和
样例输入
1 2 3 4 5 6 7 8
9 10 11 12 13 14 15 16
17 18 19 20 21 22 23 24
25 26 27 28 29 30 31 32
33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48
48 50 51 52 53 54 55 56
57 58 59 60 61 62 63 64
样例输出
260
数据规模和约定
　　棋盘上的数字范围0~99


#include <iostream>
#include <cmath>
using namespace std;
int maxvalue = 0;
int pic[8][8];

bool issafe(int pos[], int row) {
    for(int i = 0; i < row; i++) {
        if(pos[i] == pos[row] || abs(i - row) == abs(pos[i] - pos[row]))
            return false;
    }
    return true;
}
void dfs(int pos[], int row) {
    if(row == 8) {
        int sum = 0;
        for(int i = 0; i < 8; i++) {
            sum += pic[i][pos[i]];
        }
        maxvalue = sum > maxvalue ? sum : maxvalue;
        return ;
    }
    for(pos[row] = 0; pos[row] < 8; pos[row]++) {
        if(issafe(pos, row)) {
            dfs(pos, row + 1);
        }
    }
}

int main() {
    int pos[8];
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> pic[i][j];
        }
    }
    dfs(pos, 0);
    cout << maxvalue;
    return 0;
}
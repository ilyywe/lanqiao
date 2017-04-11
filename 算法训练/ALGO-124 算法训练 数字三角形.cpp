ALGO-124 算法训练 数字三角形
问题描述
　　（图３.１－１）示出了一个数字三角形。 请编一个程序计算从顶至底的某处的一条路
　　径，使该路径所经过的数字的总和最大。
　　●每一步可沿左斜线向下或右斜线向下走；
　　●1＜三角形行数≤100；
　　●三角形中的数字为整数0，1，…99；

　　（图３.１－１）
输入格式
　　文件中首先读到的是三角形的行数。

　　接下来描述整个三角形
输出格式
　　最大总和（整数）
样例输入
5
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5
样例输出
30

#include <iostream>
#include <algorithm>
#include <cstring>
int f(int i, int j);
int a[101][101];
int d[101][101];
int n;
using namespace std;
int main() {
    memset(d, -1, sizeof(d));
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            cin >> a[i][j];
    cout << f(1, 1);
    return 0;
}

int f(int i, int j) {
    if (d[i][j] >= 0)
        return d[i][j];
    if (i == n)
        return a[i][j];
    else
        return d[i][j] = a[i][j] + max(f(i + 1, j), f(i + 1, j + 1));
}
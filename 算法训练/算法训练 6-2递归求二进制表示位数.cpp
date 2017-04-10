算法训练 6-2递归求二进制表示位数
问题描述
　　给定一个十进制整数，返回其对应的二进制数的位数。例如，输入十进制数9，其对应的二进制数是1001，因此位数是4。
样例输入
9
样例输出
4
数据规模和约定
　　输入数据中每一个数的范围。
　　例：输入在int表示范围内。

分析：利用二进制移位计算，每次向右移动一位，直到为0为止，返回移位的次数cnt～

#include <iostream>
using namespace std;
int dfs(int n, int cnt) {
    if (n == 0) return cnt;
    return dfs(n >> 1, cnt + 1);
}
int main() {
    int n;
    cin >> n;
    cout << dfs(n, 0);
    return 0;
}
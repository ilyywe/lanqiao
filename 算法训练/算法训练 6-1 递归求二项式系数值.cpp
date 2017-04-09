算法训练 6-1 递归求二项式系数值 
问题描述

样例输入
一个满足题目要求的输入范例。
3 10
样例输出
与上面的样例输入对应的输出。

数据规模和约定
　　输入数据中每一个数的范围。
　　例：结果在int表示时不会溢出。

#include <iostream>
using namespace std;
int dfs(int n, int k) {
    if (k == 0 || k == n) return 1;
    return dfs(n-1, k) + dfs(n-1, k-1);
}
int main() {
    int k, n;
    cin >> k >> n;
    cout << dfs(n, k);
    return 0;
}
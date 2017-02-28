算法训练 数的划分
 问题描述
　　将整数n分成k份，且每份不能为空，任意两份不能相同(不考虑顺序)。
　　例如：n=7，k=3，下面三种分法被认为是相同的。
　　1，1，5; 1，5，1; 5，1，1;
　　问有多少种不同的分法。
输入格式
　　n，k
输出格式
　　一个整数，即不同的分法
样例输入
7 3
样例输出
4 {四种分法为：1，1，5;1，2，4;1，3，3;2，2，3;}
数据规模和约定
　　6<n<=200，2<=k<=6

分析：递归问题，step表示当前剩余的数需要分成的份数~~
把n分成k份，只需第一个数等于i，计算从i等于1一直到i等于n/k，然后把剩余的n-i分成k-1份的种类数...
front为剩余的要划分的数的前一个数，每次i从front开始一直到n/step结束，这样才能保证得到的划分方式是不递减的，才能保证不会有重复的情况产生~

#include <iostream>
using namespace std;
int cnt = 0;

void dfs(int front, int n, int step) {
    if(step == 1) {
        cnt++;
        return ;
    }
    for(int i = front; i <= n / step; i++)
        dfs(i, n - i, step - 1);
}

int main() {
    int n, k;
    cin >> n >> k;
    dfs(1, n, k);
    cout << cnt;
    return 0;
}


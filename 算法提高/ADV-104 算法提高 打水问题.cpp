算法提高 打水问题
问题描述
　　N个人要打水，有M个水龙头，第i个人打水所需时间为Ti，请安排一个合理的方案使得所有人的等待时间之和尽量小。
输入格式
　　第一行两个正整数N M 接下来一行N个正整数Ti。
　　N,M<=1000，Ti<=1000
输出格式
　　最小的等待时间之和。（不需要输出具体的安排方案）
样例输入
7 3
3 6 1 4 2 5 7
样例输出
11
提示
　　一种最佳打水方案是，将N个人按照Ti从小到大的顺序依次分配到M个龙头打水。
　　例如样例中，Ti从小到大排序为1，2，3，4，5，6，7，将他们依次分配到3个龙头，则去龙头一打水的为1，4，7；去龙头二打水的为2,5；去第三个龙头打水的为3,6。
　　第一个龙头打水的人总等待时间 = 0 + 1 + (1 + 4) = 6
　　第二个龙头打水的人总等待时间 = 0 + 2 = 2
　　第三个龙头打水的人总等待时间 = 0 + 3 = 3
　　所以总的等待时间 = 6 + 2 + 3 = 11

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
    int n, r;
    scanf("%d %d", &n, &r);
    int *a = new int[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    int ans = 0;
    int cnt = n / r;
    while(cnt--) {
        for(int j = 0; j < cnt * r; j++)
            ans += a[j];
    }
    for(int i = n/r*r; i < n; i++) {
        for(int j = i % r; j < n/r*r; j += r)
            ans += a[j];
    }
    cout << ans;
    delete [] a;
    return 0;
}
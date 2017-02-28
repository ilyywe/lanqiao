算法提高 排队打水问题
问题描述
　　有n个人排队到r个水龙头去打水，他们装满水桶的时间t1、t2………..tn为整数且各不相等，应如何安排他们的打水顺序才能使他们总共花费的时间最少？
输入格式
　　第一行n，r (n<=500,r<=75)
　　第二行为n个人打水所用的时间Ti (Ti<=100)；
输出格式
　　最少的花费时间
样例输入
3 2
1 2 3
样例输出
7
数据规模和约定
　　其中80%的数据保证n<=10

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
    int cnt = n/r;
    int index = 0;
    while(cnt--) {
        for(int j = 0; j < index; j++)
            ans += a[j];
        for(int i = 0; i < r; i++)
            ans += a[index++];
    }
    while(index < n) {
        int t = index % r;
        while(t < n) {
            ans += a[t];
            t += r;
        }
        index++;
    }
    cout << ans;
    delete [] a;
    return 0;
}
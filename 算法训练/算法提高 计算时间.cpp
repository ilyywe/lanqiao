算法提高 计算时间
问题描述
　　给定一个t，将t秒转化为HH:MM:SS的形式，表示HH小时MM分钟SS秒。HH,MM,SS均是两位数，如果小于10用0补到两位。
输入格式
　　第一行一个数T(1<=T<=100,000)，表示数据组数。后面每组数据读入一个数t，0<=t<24*60*60。
输出格式
　　每组数据一行，HH:MM:SS。
样例输入
2
0
86399
样例输出
00:00:00
23:59:59

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        int h, m;
        h = t / 3600;
        t = t % 3600;
        m = t / 60;
        t = t % 60;
        printf("%02d:%02d:%02d\n", h, m, t);
    }
    return 0;
}
ADV-184 算法提高 素数求和
问题描述
　　﻿输入一个自然数n，求小于等于n的素数之和
样例输入
2
样例输出
2
数据规模和约定
　　测试样例保证 2 <= n <= 2,000,000

#include <iostream>
using namespace std;
int v[2000001];
int main() {
    int n;
    cin >> n;
    for(int i = 2; i * i <= n; i++) {
        if(v[i] == 1)
            continue;
        for(int j = i * i; j <= n; j = j + i)
                v[j] = 1;
    }
    long long int cnt = 0;
    for(int i = 2; i <= n ; i++) {
        if(v[i] == 0) {
            cnt += i;
        }
    }
    cout << cnt;
    return 0;
}
算法提高 大数加法
问题描述
　　输入两个正整数a,b，输出a+b的值。
输入格式
　　两行，第一行a，第二行b。a和b的长度均小于1000位。
输出格式
　　一行，a+b的值。
样例输入
4
2
样例输出
6

#include <iostream>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    char ans[1001];
    int p = a.length() - 1;
    int q = b.length() - 1;
    int carry = 0;
    int i = 0;
    while(p != -1 && q != -1) {
        int ta = a[p] - '0';
        int tb = b[q] - '0';
        if(ta + tb + carry >= 10) {
            ans[i++] = (char)(ta + tb + carry - 10 + '0');
             carry = 1;
        } else {
            ans[i++] = (char)(ta + tb + carry + '0');
            carry = 0;
        }
        p--;
        q--;
    }
    while(p != -1) {
        int ta = a[p] - '0';
        if(ta + carry >= 10) {
            ans[i++] = (char)(ta + carry - 10 + '0');
            carry = 1;
        } else {
            ans[i++] = (char)(ta + carry + '0');
            carry = 0;
        }
        p--;
    }
    while(q != -1) {
        int tb = b[q] - '0';
        if(tb + carry >= 10) {
            ans[i++] = (char)(tb + carry - 10 + '0');
            carry = 1;
        } else {
            ans[i++] = (char)(tb + carry + '0');
            carry = 0;
        }
        q--;
    }
    if(carry == 1) {
        ans[i] = '1';
    }
    for(; i >= 0; i--) {
        cout << ans[i];
    }
    return 0;
}
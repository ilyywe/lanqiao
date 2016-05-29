ADV-188 算法提高 排列数
问题描述
　　0、1、2三个数字的全排列有六种，按照字母序排列如下：
　　012、021、102、120、201、210
　　输入一个数n
　　求0~9十个数的全排列中的第n个（第1个为0123456789）。
输入格式
　　一行，包含一个整数n
输出格式
　　一行，包含一组10个数字的全排列
样例输入
1
样例输出
0123456789
数据规模和约定
　　0 < n <= 10!

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s = "0123456789";
    int n;
    cin >> n;
    int cnt = 1;
    do {
        if(cnt == n) {
            cout << s;
            break;
        }
        cnt++;
    }while(next_permutation(s.begin(), s.end()));
    return 0;
}
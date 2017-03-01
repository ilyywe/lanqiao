ALGO-98 算法训练 数位分离  
问题描述
　　编写一个程序，输入一个1000 以内的正整数，然后把这个整数的每一位数字都分离出来，并逐一地显示。
　　输入格式：输入只有一行，即一个1000以内的正整数。
　　输出格式：输出只有一行，即该整数的每一位数字，之间用空格隔开。
　　输入输出样例
样例输入
769
样例输出
7 6 9

#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        cout << s[i] << " ";
    }
    return 0;
}
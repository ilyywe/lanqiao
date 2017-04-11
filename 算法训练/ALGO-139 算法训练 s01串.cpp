ALGO-139 算法训练 s01串
问题描述
　　s01串初始为"0"
　　按以下方式变换
　　0变1，1变01
输入格式
　　1个整数(0~19)
输出格式
　　n次变换后s01串
样例输入
3
样例输出
101
数据规模和约定
0~19

#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s = "0";
    while(n--) {
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '0') {
                s[i] = '1';
            } else {
                s.insert(i, "0");
                i = i+1;
            }
        }
    }
    cout << s;
    return 0;
}
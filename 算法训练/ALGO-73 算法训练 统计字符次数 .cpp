ALGO-73 算法训练 统计字符次数 
　输入一个字符串(长度在100以内)，统计其中数字字符出现的次数。
样例输入
Ab100cd200
样例输出
6

#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.length(); i++) {
        if(isdigit(s[i]))
            cnt++;
    }
    cout << cnt;
    return 0;
}
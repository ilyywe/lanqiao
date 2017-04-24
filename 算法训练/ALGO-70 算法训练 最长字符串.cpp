ALGO-70 算法训练 最长字符串
求出5个字符串中最长的字符串。每个字符串长度在100以内，且全为小写字母。
样例输入
one two three four five
样例输出
three

#include <iostream>
using namespace std;
int main() {
    string a[5];
    int m = 0;
    int j = -1;
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
        if(a[i].length() > m) {
            m = a[i].length();
            j = i;
        }
    }
    cout << a[j];
    return 0;
}
ALGO-74 算法训练 连接字符串
编程将两个字符串连接起来。例如country与side相连接成为countryside。
　　输入两行，每行一个字符串（只包含小写字母，长度不超过100）；输出一行一个字符串。
样例输入
country
side
样例输出
countryside

#include <iostream>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << s2;
    return 0;
}
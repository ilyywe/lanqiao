ADV-71 算法提高 判断回文  
编程判断一个字符串是否是回文，当字符串是回文时，输出字符串：yes!，否则输出字符串：no!。所谓回文即正向与反向的拼写都一样，如adgda。　　长度在100以内，且全为小写字母
样例输入
adgda
样例输出
yes!

#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int i = 0, j = s.length()-1;
    while(i < j) {
        if(s[i] != s[j]) {
            cout << "no!";
            return 0;
        }
        i++;
        j--;
    }
    cout << "yes!";
    return 0;
}
ALGO-76 算法训练 十进制数转八进制数  
　　编写函数把一个十进制数输出其对应的八进制数。
样例输入
9274
样例输出
22072

#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    while(n) {
        s = (char)(n % 8 + '0') + s;
        n = n / 8;
    }
    cout << s;
    return 0;
}
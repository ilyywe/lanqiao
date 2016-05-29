算法提高 字符串比较
独立实现标准字符串库的strcmp函数，即字符串比较函数，从键盘输入两个字符串，按字典序比较大小，前者大于后者输出1，前者小于后者输出-1，两者相等输出0。
样例输入: 
apple one 
样例输出:
-1
样例输入: 
hello he
样例输出:
1

样例输入: 
hello hello
样例输出:
0

#include <iostream>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    int lena = a.length();
    int lenb = b.length();
    int len = lena > lenb ? lena : lenb;
    for(int i = 0; i < len; i++) {
        if(a[i] > b[i]) {
            cout << "1";
            return 0;
        }
        if(a[i] < b[i]) {
            cout << "-1";
            return 0;
        }
    }
    if(lena == lenb) {
        cout << "0";
    } else if(lena > lenb) {
        cout << "1";
    }else {
        cout << "-1";
    }
    return 0;
}return 0;
}
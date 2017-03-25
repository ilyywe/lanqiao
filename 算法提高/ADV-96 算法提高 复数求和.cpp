ADV-96 算法提高 复数求和
从键盘读入n个复数（实部和虚部都为整数）用链表存储，遍历链表求出n个复数的和并输出。
样例输入: 
3 
3 4
5 2
1 3
样例输出:
9+9i
样例输入: 
7
1 2
3 4
2 5
1 8
6 4
7 9
3 7
样例输出:
23+39i

#include <iostream>
using namespace std;
int main() {
    int a = 0, b = 0;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int ta, tb;
        cin >> ta >> tb;
        a += ta;
        b += tb;
    }
    cout << a;
    if(b >= 0) {
        cout << "+" << b << "i";
    } else if(b < 0) {
        cout << b << "i";
    }
    return 0;
}
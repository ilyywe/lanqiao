ALGO-107 算法训练 9-7链表数据求和操作
　　读入10个复数，建立对应链表，然后求所有复数的和。
样例输入
1 2
1 3
4 5
2 3
3 1
2 1
4 2
2 2
3 3
1 1
样例输出
23+23i

#include <iostream>
using namespace std;
int main() {
    int suma = 0, sumb = 0;
    for(int i = 0; i < 10; i++) {
        int a, b;
        cin >> a >> b;
        suma += a;
        sumb += b;
    }
    cout << suma;
    if(sumb >= 0) {
        cout << "+";
    }
    cout << sumb << "i";
    return 0;
}
ADV-69 算法提高 质因数
　将一个正整数N(1<N<32768)分解质因数。例如，输入90，打印出90=2*3*3*5。
样例输入
66
样例输出
66=2*3*11

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++) {
        if(i != n && n % i == 0) {
            cout << n << "=" << i;
        } else if(i == n) {
            cout << n "=" << 1 << "*" << i;
            return 0;
        }
    }
    while(n != 1) {
        for(int i = 2; i <= n; i++) {
            if(n % i == 0) {
                cout << "*" << i;
                n = n / i;
                break;
            }
        }
    }
    return 0;
}
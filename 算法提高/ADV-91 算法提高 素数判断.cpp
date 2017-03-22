ADV-91 算法提高 素数判断
编写一函数IsPrime，判断某个大于2的正整数是否为素数。
样例输入: 
5
样例输出:
yes
样例输入: 
9
样例输出:
no
注意：是素数输出yes，不是素数输出no，其中yes和no均为小写。

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}
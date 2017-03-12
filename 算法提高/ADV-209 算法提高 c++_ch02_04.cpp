ADV-209 算法提高 c++_ch02_04
问题描述
　　输出1~100间的质数并显示出来。注意1不是质数。
输出格式
　　每行输出一个质数。
　　2
　　3
　　...
　　97

#include <iostream>
using namespace std;
bool isprime(int n) {
    if(n <= 1)
        return false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    for(int i = 1; i <= 100; i++) {
        if(isprime(i))
            cout << i << endl;
    }
    return 0;
}
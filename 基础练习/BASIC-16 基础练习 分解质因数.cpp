BASIC-16 基础练习 分解质因数
问题描述
　　求出区间[a,b]中所有整数的质因数分解。
输入格式
　　输入两个整数a，b。
输出格式
　　每行输出一个数的分解，形如k=a1*a2*a3...(a1<=a2<=a3...，k也是从小到大的)(具体可看样例)
样例输入
3 10
样例输出
3=3
4=2*2
5=5
6=2*3
7=7
8=2*2*2
9=3*3
10=2*5
提示
　　先筛出所有素数，然后再分解。
数据规模和约定
　　2<=a<=b<=10000



#include <iostream>
using namespace std;
int isprime(int n) {
    if(n <= 1)
        return 0;
    else if(n == 2 || n == 3)
        return 1;
    else {
        for(int i = 2; i * i < n; i++) {
            if(n % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}
int main() {
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        int temp = i;
        cout << i << "=";
        int flag = 0;
        while(temp != 1) {
            for(int j = 2; j <= temp; j++) {
                if(isprime(j) && temp % j == 0) {
                    temp = temp / j;
                    if(flag == 1)
                        cout << "*";
                    cout << j;
                    flag = 1;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
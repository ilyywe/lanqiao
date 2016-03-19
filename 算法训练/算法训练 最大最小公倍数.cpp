//  算法训练 最大最小公倍数  
问题描述
已知一个正整数N，问从1~N中任选出三个数，他们的最小公倍数最大可以为多少。

输入格式
输入一个正整数N。

输出格式
输出一个整数，表示你找到的最小公倍数。
样例输入
9
样例输出
504
数据规模与约定
1 <= N <= 10^6。

#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int result = 0;
    if (n <= 2)
        result = n;
    else if (n % 2) {
        result = (n - 2) * (n - 1) * n;
    } else {
        if(n % 3 == 0) {
            result = (n - 3) * (n - 2) * (n - 1);
        } else {
            result = (n - 3) * (n - 1) * n;
        }
    }
    cout << result;
    return 0;
}

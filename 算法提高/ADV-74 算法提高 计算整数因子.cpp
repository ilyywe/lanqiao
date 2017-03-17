ADV-74 算法提高 计算整数因子
问题描述
　　输入一个整数，输出其所有质因子。
输入格式
　　输入只有一行，包含一个整数n。
输出格式
　　输出一行，包含若干个整数，为n的所有质因子，按照从小到大的顺序排列。
样例输入
6
样例输出
2 3
数据规模和约定
　　1<=n<=10000。

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 2; i < n; i++) {
        int flag = 0;
        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0)
                flag = 1;
        }
        if(flag == 0 && n % i == 0)
            cout << i << " ";
    }
    return 0;
}
ADV-79 算法提高 时间转换
输入n分钟换算成天、小时和分输出。例如4880分钟，可换算成3天9小时20分。
　　输入一个正整数n(1
样例输入
4880
样例输出
3 9 20

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << n / 1440 << " ";
    n = n % 1440;
    cout << n / 60 << " ";
    n = n % 60;
    cout << n;
    return 0;
    
}
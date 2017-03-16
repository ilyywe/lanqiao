ADV-212 算法提高 3-1课后习题2
问题描述
　　编写一个程序，接受用户输入的10个整数，输出它们的和。
输出格式
　　要求用户的输出满足的格式。
　　例：输出1行，包含一个整数，表示所有元素的和。
样例输入
1 2 3 4 5 6 7 8 9 10
样例输出
55
数据规模和约定
　　输入数据中每一个数的范围。
　　例：输入数<100000。

#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    for(int i = 0; i < 10; i++) {
        int t;
        cin >> t;
        sum += t;
    }
    cout << sum;
    return 0;
}
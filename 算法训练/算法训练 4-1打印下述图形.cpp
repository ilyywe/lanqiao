算法训练 4-1打印下述图形
问题描述
　　使用循环结构打印下述图形，打印行数n由用户输入。打印空格时使用"%s"格式，向printf函数传递只包含一个或多个空格的字符串" ",下同。

样例输入
一个满足题目要求的输入范例。
例：

5
样例输出
与上面的样例输入对应的输出。
例：

数据规模和约定
　　输入数据中每一个数的范围。
　　例：0<n<20。

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        for(int j = 0; j < 2*i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
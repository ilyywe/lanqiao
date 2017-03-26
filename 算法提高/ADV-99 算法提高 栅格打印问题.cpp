ADV-99 算法提高 栅格打印问题
问题描述
　　编写一个程序，输入两个整数，作为栅格的高度和宽度，然后用“+”、“-”和“|”这三个字符来打印一个栅格。
　　输入格式：输入只有一行，包括两个整数，分别为栅格的高度和宽度。
　　输出格式：输出相应的栅格。
　　输入输出样例
样例输入
3 2
样例输出
+-+-+
| | |
+-+-+
| | |
+-+-+
| | |
+-+-+

#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if(a == 0 || b == 0)
        return 0;
    for(int i = 1; i <= a * 2 + 1; i++) {
        if(i % 2 == 1) {
            for(int j = 1; j <= b * 2 + 1; j++) {
                if(j % 2 == 1) {
                    cout << "+";
                } else {
                    cout << "-";
                }
            }
        } else {
            for(int j = 1; j <= b * 2 + 1; j++) {
                if(j % 2 == 1) {
                    cout << "|";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
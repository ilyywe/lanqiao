ADV-88 算法提高 输出正反三角形
使用循环结构打印下述图形，打印行数n由用户输入。图中每行事实上包括两部分，中间间隔空格字符数m也由用户输入。
样例输入n,m: 
5  4
样例输出:
    *    *********
   ***    *******
  *****    *****
 *******    ***
*********    *

注意：两行之间没有空行。

#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++)
            cout << " ";
        for(int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        for(int j = 1; j <= m; j++)
            cout << " ";
        for(int j = 1; j <= 2 * (n - i + 1) - 1; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
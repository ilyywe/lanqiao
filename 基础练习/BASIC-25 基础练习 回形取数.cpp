BASIC-25 基础练习 回形取数
问题描述
　　回形取数就是沿矩阵的边取数，若当前方向上无数可取或已经取过，则左转90度。一开始位于矩阵左上角，方向向下。
输入格式
　　输入第一行是两个不超过200的正整数m, n，表示矩阵的行和列。接下来m行每行n个整数，表示这个矩阵。
输出格式
　　输出只有一行，共mn个数，为输入矩阵回形取数得到的结果。数之间用一个空格分隔，行末不要有多余的空格。
样例输入
3 3
1 2 3
4 5 6
7 8 9
样例输出
1 4 7 8 9 6 3 2 5
样例输入
3 2
1 2
3 4
5 6
样例输出
1 3 5 6 4 2


#include <iostream>
#include <memory.h>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    int a[201][201];
    memset(a, -1, sizeof(a));
    int i = 0, j = 0;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            cin >> a[i][j];
    i = 0, j = 0;
    int total = 0;
    while(total < m * n) {
        while(i <= m-1 && a[i][j] != -1) {//down
            cout << a[i][j] << " ";
            a[i][j] = -1;
            i++;
            total++;
        }
        i--;
        j++;
        while(j <= n-1 && a[i][j] != -1) {//right
            cout << a[i][j] << " ";
            a[i][j] = -1;
            j++;
            total++;
        }
        j--;
        i--;
        while(i >= 0 && a[i][j] != -1) {//up
            cout << a[i][j] << " ";
            a[i][j] = -1;
            i--;
            total++;
        }
        i++;
        j--;
        while(j >= 0 && a[i][j] != -1) {//left
            cout << a[i][j] << " ";
            a[i][j] = -1;
            j--;
            total++;
        }
        j++;
        i++;
    } 
    return 0;
}
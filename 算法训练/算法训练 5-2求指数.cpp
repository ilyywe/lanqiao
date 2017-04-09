算法训练 5-2求指数
问题描述
　　已知n和m，打印n^1，n^2，...，n^m。要求用静态变量实现。n^m表示n的m次方。已知n和m，打印n^1，n^2，...，n^m。要求用静态变量实现。n^m表示n的m次方。（每行显示5个数，每个数宽为12，右对齐）
样例输入
一个满足题目要求的输入范例。
例：
3 8
样例输出
与上面的样例输入对应的输出。
例：

数据规模和约定
　　输入数据中每一个数的范围。
　　例：n^m小于int 的表示范围。

分析：用静态变量表示result和m，每次将m减一，result累乘并输出，以%12d的形式输出～

#include <cstdio>
static int result = 1, m;
int n, rest, flag = 0;
void func() {
    result *= n;
    if (flag == 1 && (m - rest) % 5 == 0) 
        printf("\n");
    flag = 1;
    m--;
    printf("%12d", result);
}
int main() {
    scanf("%d%d", &n, &m);
    rest = m % 5;
    while (m != 0)
        func();
    return 0;
}
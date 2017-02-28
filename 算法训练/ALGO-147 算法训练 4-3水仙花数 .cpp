算法训练 4-3水仙花数
问题描述
　　打印所有100至999之间的水仙花数。所谓水仙花数是指满足其各位数字立方和为该数字本身的整数，例如 153=1^3+5^3+3^3。
样例输入
一个满足题目要求的输入范例。
例：
无
样例输出
153
xxx
xxx

#include <cstdio>
using namespace std;
int main() {
    for(int i = 1; i <= 9; i++) {
        for(int j = 0; j <= 9; j++) {
            for(int k = 0; k <= 9; k++) {
                int sum = i * i * i + j * j * j + k * k * k;
                int n = i * 100 + j * 10 + k;
                if(sum == n)
                    printf("%d%d%d\n", i, j, k);
            }
        }
    }
    return 0;
}
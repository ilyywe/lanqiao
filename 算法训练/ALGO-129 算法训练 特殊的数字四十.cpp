ALGO-129 算法训练 特殊的数字四十
　特殊的数字四十
问题描述
　　1234是一个非常特殊的四位数，因为它的各位数之和为10，编程求所有这样的四位十进制数。
输出格式
　　按从小到大的顺序输出满足条件的四位十进制数。每个数字占用一行。

#include <iostream>
using namespace std;
int main() {
    for(int i = 1; i <= 9; i++) {
        for(int j = 0; j <= 9; j++) {
            for(int k = 0; k <= 9; k++) {
                int l = 10 - i - j - k;
                if(l >= 0 && l <= 9)
                    cout << i << j << k << l << endl;
            }
        }
    }
    return 0;
}
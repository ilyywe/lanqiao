ALGO-146 算法训练 4-2找公倍数
问题描述
　　打印出1-1000所有11和17的公倍数。

#include <cstdio>
using namespace std;
int main() {
    for(int i = 1; i <= 1000; i++) {
        if(i % 11 == 0 && i % 17 == 0)
            printf("%d\n", i);
    }
    return 0;
}
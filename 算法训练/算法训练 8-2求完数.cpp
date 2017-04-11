算法训练 8-2求完数
问题描述
　　如果一个自然数的所有小于自身的因子之和等于该数，则称为完数。设计算法，打印1-9999之间的所有完数。
样例输出
与上面的样例输入对应的输出。
例：6就是一个完数
数据规模和约定
　　1-9999
分析：求6～9999之间所有的数的因子之和，然后将和sum与自身比较，如果相等就输出～

#include <iostream>
using namespace std;
int main() {
    for (int i = 6; i <= 9999; i++) {
        int sum = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) 
                sum += j;
        }
        if (sum == i) 
            cout << i << endl;
    }
    return 0;
}
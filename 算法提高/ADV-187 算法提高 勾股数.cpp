ADV-187 算法提高 勾股数
问题描述
　　勾股数是一组三个自然数，a < b < c，以这三个数为三角形的三条边能够形成一个直角三角形
　　输出所有a + b + c <= 1000的勾股数
　　a小的先输出；a相同的，b小的先输出。
输出格式
　　每行为一组勾股数，用空格隔开
样例输出
例如，结果的前三行应当是
3 4 5
5 12 13
6 8 10

#include <iostream>
using namespace std;
int main() {
    for(int i = 1; i <= 333; i++) {
        for(int j = i+1; j <= 666; j++) {
            for(int k = j+1; k <= 999; k++) {
                if(i + j + k <= 1000 && i*i + j*j == k*k)
                    cout << i << " " << j << " " << k << endl;
            }
        }
    }
    return 0;
}

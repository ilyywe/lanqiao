算法提高 填充蛋糕 
　　编程计算涂满高为2，半径为r的圆形蛋糕表面，需要多少表面积的奶油(只要涂上表面和侧面)
　　读入一个数r，输出需要奶油的表面积，结果保留一位小数
样例输入
5.0
样例输出
141.4

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main() {
    double r;
    cin >> r;
    double ans = r * M_PI * r + 4 * M_PI * r;
    printf("%.1lf", ans);
    return 0;
}

或者用atan(1)*4代替：

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main() {
    double r;
    cin >> r;
    double ans = r * atan(1) * 4 * r + 16 * atan(1) * r;
    printf("%.1lf", ans);
    return 0;
}
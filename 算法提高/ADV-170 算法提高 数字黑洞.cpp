算法提高 数字黑洞
问题描述
　　任意一个四位数，只要它们各个位上的数字是不全相同的，就有这样的规律：
　　1)将组成该四位数的四个数字由大到小排列，形成由这四个数字构成的最大的四位数；
　　2)将组成该四位数的四个数字由小到大排列，形成由这四个数字构成的最小的四位数(如果四个数中含有0，则得到的数不足四位)；
　　3)求两个数的差，得到一个新的四位数(高位零保留)。
　　重复以上过程，最后一定会得到的结果是6174。
　　比如：4312 3087 8352 6174，经过三次变换，得到6174
输入格式
　　一个四位整数，输入保证四位数字不全相同
输出格式
　　一个整数，表示这个数字经过多少次变换能得到6174
样例输入
4312
样例输出
3

#include <iostream>
#include <algorithm>
using namespace std;
int cmp1(int a, int b) {return a > b;}
int cmp2(int a, int b) {return a < b;}
int main() {
    int a[4];
    string s;
    cin >> s;
    for(int i = 0; i < 4; i++) {
        a[i] = s[i] - '0';
    }
    int res = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
    int cnt = 0;
    while(res != 6174) {
        cnt++;
        sort(a, a+4, cmp1);
        int big = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
        sort(a, a+4, cmp2);
        int small = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
        res = big - small;
        a[0] = res / 1000;
        a[1] = res / 100 - res / 1000 * 10;
        a[2] = res / 10 - res / 100 * 10;
        a[3] = res % 10;
    }
    cout << cnt;
    return 0;
}
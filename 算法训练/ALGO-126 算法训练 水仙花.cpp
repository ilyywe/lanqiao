ALGO-126 算法训练 水仙花
问题描述
　　判断给定的三位数是否 水仙花 数。所谓 水仙花 数是指其值等于它本身 每位数字立方和的数。例 153 就是一个 水仙花 数。 153=13+53+33
输入格式
　　一个整数。
输出格式
　　是水仙花数,输出"YES",否则输出"NO"(不包括引号)
样例输入
123
样例输出
NO
数据规模和约定
　　一个三位的整数,否则输出"NO"


#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int a = 0;
    int sum = 0;
    for(int i = 0; i < s.length(); i++) {
        int temp = s[i] - '0';
        a = a * 10 + temp;
        sum += (temp * temp * temp);
    }
    if(sum == a) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
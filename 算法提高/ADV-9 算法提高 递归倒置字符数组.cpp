算法提高 递归倒置字符数组 
问题描述
　　完成一个递归程序，倒置字符数组。并打印实现过程
　　递归逻辑为：
　　当字符长度等于1时，直接返回
　　否则，调换首尾两个字符，在递归地倒置字符数组的剩下部分
输入格式
　　字符数组长度及该数组
输出格式
　　在求解过程中，打印字符数组的变化情况。
　　最后空一行，在程序结尾处打印倒置后该数组的各个元素。
样例输入
Sample 1
5 abcde
Sample 2
1 a

样例输出
Sample 1
ebcda
edcba
edcba
Sample 2
a

#include <iostream>
using namespace std;
string s;
void func(int head, int tail) {
    if(tail - head <= 0)
        return ;
    swap(s[head], s[tail]);
    cout << s << endl;
    func(head+1, tail-1);
}

int main() {
    int n;
    cin >> n >> s;
    func(0, n-1);
    cout << endl << s << endl;
    return 0;
}
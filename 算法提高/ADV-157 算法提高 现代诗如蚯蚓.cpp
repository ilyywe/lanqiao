算法提高 现代诗如蚯蚓
问题描述
　　现代诗如蚯蚓
　　断成好几截都不会死
　　字符串断成好几截
　　有可能完全一样
　　请编写程序
　　输入字符串
　　输出该字符串最多能断成多少截完全一样的子串
输入格式
　　一行，一个字符串
输出格式
　　一行，一个正整数表示该字符串最多能断成的截数
样例输入
abcabcabcabc
样例输出
4
样例说明
　　最多能断成四个”abc”，也就是abc重复四遍便是原串
　　同时也能断成两个”abcabc”
　　最坏情况是断成一个原串”abcabcabcabc”
数据规模和约定
　　字符串长度<=1000

#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int len = s.length();
    int ans = len;
    for(int i = 1; i < len/2; i++) {
        if(len % i != 0)
            continue;
        int flag = 0;
        string t1, t2;
        t1 = s.substr(0, i);
        for(int j = i; j < len; j = j + i) {
            t2 = s.substr(j, i);
            if(t2 != t1) {
                flag = 1;
                break;
            }
            t1 = t2;
        }
        if(flag == 0)
            ans = ans < i ? ans : i;
    }
    cout << len / ans;
    return 0;
}
算法提高 最长单词
编写一个函数，输入一行字符，将此字符串中最长的单词输出。
　　输入仅一行，多个单词，每个单词间用一个空格隔开。单词仅由小写字母组成。所有单词的长度和不超过100000。如有多个最长单词，输出最先出现的。
样例输入
I am a student
样例输出
student

#include <iostream>
using namespace std;
int main() {
    string s;
    string temp;
    int mmax = 0;
    while(cin >> temp) {
        int len = temp.length();
        if(mmax < len) {
            mmax = len;
            s = temp;
        }
    }
    cout << s;
    return 0;
}
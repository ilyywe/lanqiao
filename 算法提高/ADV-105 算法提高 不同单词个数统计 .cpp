ADV-105 算法提高 不同单词个数统计 
问题描述
　　编写一个程序，输入一个句子，然后统计出这个句子当中不同的单词个数。例如：对于句子“one little two little three little boys”，总共有5个不同的单词：one, little, two, three, boys。
　　说明：（1）由于句子当中包含有空格，所以应该用gets函数来输入这个句子；（2）输入的句子当中只包含英文字符和空格，单词之间用一个空格隔开；（3）不用考虑单词的大小写，假设输入的都是小写字符；（4）句子长度不超过100个字符。
　　输入格式：输入只有一行，即一个英文句子。
　　输出格式：输出只有一行，是一个整数，表示句子中不同单词的个数。
输入输出样例
样例输入
one little two little three little boys
样例输出
5

#include <iostream>
#include <set>
using namespace std;
int main() {
    string t;
    set<string> s;
    while(cin >> t) s.insert(t);
    cout << s.size();
    return 0;
}
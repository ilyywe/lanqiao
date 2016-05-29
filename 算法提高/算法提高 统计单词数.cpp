算法提高 统计单词数
问题描述
　　统计输入英文文章段落中不同单词（单词有大小写之分,　　但统计时忽略大小写）各自出现的次数。 输入段落中所含单词的总数不超过100，最长单词的长度不超过20个字母.
输入格式
　　一个包含若干句子的段落, 每个句子由若干英文单词组成. 除空格,　　逗号和句号外, 这些输入的句子中不含其他非字母字符, 并且, 逗号和句号紧跟在它前面的英文单词后面, 中间没有空格. 段落最后一个字符是回车符,　　表示输入结束.
输出格式
　　若段落中共有M个不同的英文单词，则按照其在段落中出现的先后顺序输出M行，各行的格式为:　　单词中所有字母均用大写形式输出（最长的单词顶格输出，它前面没有多余的空格;　　其余单词与其右对齐）+冒号+N个*号+该单词在段落中的出现次数N
样例输入
This is a test. This test is easy. This is a test. This test is easy.

样例输出
THIS:****4
IS:****4
A:**2
TEST:****4
EASY:**2

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
typedef pair<string, int> p;
int main() {
    string str;
    vector<p> v;
    getline(cin, str);
    string s;
    int flag2 = 0;
    int maxlen = 0;
    for(int i = 0; i < str.length(); i++) {
        if(flag2 == 1 && str[i] == ' ')
            continue;
        if(str[i] == '.' || str[i] == ' ' || str[i] == ',' ) {
            flag2 = 1;
            int len = s.length();
            maxlen = maxlen > len ? maxlen : len;
            for(int j = 0; j < len; j++) {
                if(s[j] >= 'a' && s[j] <= 'z') {
                    s[j] = s[j] - 32;
                }
            }
            int flag = 0;
            for(int i = 0; i < v.size(); i++) {
                if(v[i].first == s) {
                    v[i].second++;
                    flag = 1;
                }
            }
            if(flag == 0) {
                p temp = make_pair(s, 1);
                v.push_back(temp);
            }
            s = "";
        } else {
            flag2 = 0;
            s += str[i];
        }
    }
    for(int i = 0; i < v.size(); i++) {
        string temp = v[i].first;
        int len = maxlen - temp.length();
        for(int k = 0; k < len; k++) {
            cout << " ";
        }
        cout << v[i].first << ":";
        for(int j = 0; j < v[i].second; j++) {
            cout << "*";
        }
        cout << v[i].second << endl;
    }
    return 0;
}
基础练习 十六进制转八进制
问题描述
　　给定n个十六进制正整数，输出它们对应的八进制数。
输入格式
　　输入的第一行为一个正整数n （1<=n<=10）。
　　接下来n行，每行一个由0~9、大写字母A~F组成的字符串，表示要转换的十六进制正整数，每个十六进制数长度不超过100000。
输出格式
　　输出n行，每行为输入对应的八进制正整数。
　　【注意】
　　输入的十六进制数不会有前导0，比如012A。
　　输出的八进制数也不能有前导0。
样例输入
　　2
　　39
　　123ABC
样例输出
　　71
　　4435274
　　【提示】
　　先将十六进制数转换成某进制数，再由某进制数转换成八进制。

#include <iostream>
#include <map>
using namespace std;
int main() {
    string b, s, a;
    int n;
    cin >> n;
    string arr[16] = {"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111", "1000",
        "1001", "1010", "1011", "1100", "1101", "1110", "1111"};
    map<string, string> m;
    m["000"] = "0"; m["001"] = "1"; m["010"] = "2"; m["011"] = "3"; m["100"] = "4";
    m["101"] = "5"; m["110"] = "6"; m["111"] = "7";
    for(int i = 0; i < n; i++) {
        cin >> s;
        int lens = s.length();
        for(int j = 0; j < lens; j++) {
            if(s[j] > '9') {
                b += arr[s[j] - 'A' + 10];
            } else {
                b += arr[s[j] - '0'];
            }
        }
        int lenb = b.length();
        if(lenb % 3 == 1) {
            b = "00" + b;
        } else if(lenb % 3 == 2) {
            b = "0" + b;
        }
        int flag = 0;
        for(int j = 0; j < lenb; j += 3) {
            string temp = b.substr(j, 3);
            string t = m[temp];
            if(j == 0 && t == "0") {
                flag = 1;
                continue;
            }
            if(flag == 1 && j == 3 && t == "0") {
                continue;
            }
            cout << t;
        }
        cout << endl;
        b = "";
    }
    return 0;
}


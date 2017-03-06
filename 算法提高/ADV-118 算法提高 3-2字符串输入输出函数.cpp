ADV-118 算法提高 3-2字符串输入输出函数
描述
　　编写函数GetReal和GetString，在main函数中分别调用这两个函数。在读入一个实数和一个字符串后，将读入的结果依次用printf输出。
　　两次输入前要输出的提示信息分别是"please input a number:\n"和"please input a string:\n"
样例输入
9.56
hello
样例输出
please input a number:
please input a string:
9.56
hello

#include <iostream>
using namespace std;
void GetReal() {
    cout << "please input a number:\n";
}

void GetString() {
    cout << "please input a string:\n";
}

int main() {
    GetReal();
    GetString();
    string n, s;
    cin >> n >> s;
    cout << n << endl << s;
    return 0;
}
ADV-84 算法提高 图形输出
编写一程序，在屏幕上输出如下内容：
　　X | X | X
　　---+---+---
　　| |
　　---+---+---
　　O | O | O
　　注意：本题请同学们严格按照图形的格式输出，对齐，其中X和O为大写，否则系统会判为错误。

#include <iostream>
using namespace std;
int main() {
    cout << " X | X | X" << endl << "---+---+---" << endl << "   |   |   " << endl << "---+---+---" << endl << " O | O | O" << endl;
    return 0;
}
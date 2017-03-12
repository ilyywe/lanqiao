ADV-208 算法提高 矩阵相乘
问题描述
　　小明最近在为线性代数而头疼，线性代数确实很抽象（也很无聊），可惜他的老师正在讲这矩阵乘法这一段内容。
　　当然，小明上课打瞌睡也没问题，但线性代数的习题可是很可怕的。
　　小明希望你来帮他完成这个任务。

　　现在给你一个ai行aj列的矩阵和一个bi行bj列的矩阵，
　　要你求出他们相乘的积（当然也是矩阵）。
　　(输入数据保证aj=bi,不需要判断)
输入格式
　　输入文件共有ai+bi+2行，并且输入的所有数为整数（long long范围内）。
　　第1行：ai 和 aj
　　第2~ai+2行：矩阵a的所有元素
　　第ai+3行：bi 和 bj
　　第ai+3~ai+bi+3行：矩阵b的所有元素
输出格式
　　输出矩阵a和矩阵b的积（矩阵c)
　　（ai行bj列）
样例输入
2 2
12 23
45 56
2 2
78 89
45 56
样例输出
1971 2356
6030 7141

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    vector<vector<long long int> > A(a, vector<long long int>(b));
    for(int i = 0; i < a; i++)
        for(int j = 0; j < b; j++)
            cin >> A[i][j];
    int c, d;
    cin >> c >> d;
    vector<vector<long long int> > B(c, vector<long long int>(d));
    for(int i = 0; i < c; i++)
        for(int j = 0; j < d; j++)
            cin >> B[i][j];
    vector<vector<long long int> > C(a, vector<long long int>(d));
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < d; j++) {
            C[i][j] = 0;
            for(int k = 0; k < b; k++)
                C[i][j] += A[i][k] + B[k][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
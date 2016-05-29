算法提高 最长公共子序列
问题描述
　　给定两个字符串，寻找这两个字串之间的最长公共子序列。
输入格式
　　输入两行，分别包含一个字符串，仅含有小写字母。
输出格式
　　最长公共子序列的长度。
样例输入
abcdgh
aedfhb
样例输出
3
样例说明
　　最长公共子序列为a，d，h。
数据规模和约定
　　字串长度1~1000。

#include <iostream>
#define max(a, b) a > b ? a : b
using namespace std;
int dp[1001][1001];
int main() {
    string a, b;
    cin >> a >> b;
    for(int i = 1; i <= a.length(); i++) {
        for(int j = 1; j <= b.length(); j++) {
            if(a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout << dp[a.length()][b.length()];
    return 0;
}
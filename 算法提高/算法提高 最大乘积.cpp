算法提高 最大乘积
问题描述
　　对于n个数，从中取出m个数，如何取使得这m个数的乘积最大呢？
输入格式
　　第一行一个数表示数据组数
　　每组输入数据共2行：
　　第1行给出总共的数字的个数n和要取的数的个数m，1<=n<=m<=15，
　　第2行依次给出这n个数，其中每个数字的范围满足:a[i]的绝对值小于等于4。
输出格式
　　每组数据输出1行，为最大的乘积。
样例输入
1
5 5
1 2 3 4 2
样例输出
48 

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int cnt;
    cin >> cnt;
    for(int i = 0; i < cnt; i++) {
        int n, m;
        cin >> n >> m;
        int *a = new int [n];
        int ans = 1;
        for(int j = 0; j < n; j++) {
            cin >> a[j];
        }
        sort(a, a+n);
        int p = 0, q = n - 1;
        while(p <= n-1 && q >= 0 && m > 0) {
            if((a[p] * a[p+1] > a[q] * a[q-1]) && m >= 2) {
                ans = ans * (a[p] * a[p+1]);
                p += 2;
                m -= 2;
            } else {
                ans = ans * (a[q]);
                q--;
                m--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
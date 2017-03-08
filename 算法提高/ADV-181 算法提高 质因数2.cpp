ADV-181 算法提高 质因数2
将一个正整数N(1<N<32768)分解质因数，把质因数按从小到大的顺序输出。最后输出质因数的个数。
输入格式
　　一行，一个正整数
输出格式
　　两行，第一行为用空格分开的质因数
　　第二行为质因数的个数
样例输入
66
样例输出
2 3 11
3
样例输入
90
样例输出
2 3 3 5
4
样例输入
37
样例输出
37
1

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cnt = 0;
    while(n != 1) {
        for(int i = 2; i <= n; i++) {
            if(n % i == 0) {
                cout << i << " ";
                cnt++;
                n = n / i;
                break;
            }
        }
    }
    cout << endl << cnt;
    return 0;
}
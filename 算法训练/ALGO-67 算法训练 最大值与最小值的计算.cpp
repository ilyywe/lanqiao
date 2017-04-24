ALGO-67 算法训练 最大值与最小值的计算  
　输入11个整数，计算它们的最大值和最小值。
样例输入
0 1 2 3 4 5 6 7 8 9 10
样例输出
10 0

#include <iostream>
using namespace std;
int main() {
    int mmax = INT_MIN;
    int mmin = INT_MAX;
    for(int i = 0; i < 11; i++) {
        int temp;
        cin >> temp;
        mmax = mmax > temp ? mmax : temp;
        mmin = mmin < temp ? mmin : temp;
    }
    cout << mmax << " " << mmin;
    return 0;
}
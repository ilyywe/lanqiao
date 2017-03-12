ADV-20 算法提高 交换Easy
问题描述
　　给定N个整数组成的序列，每次交换当前第x个与第y个整数，要求输出最终的序列。
输入格式
　　第一行为序列的大小N(1<=N<=1000)和操作个数M(1<=M<=1000)。
　　第二行包含N个数字，表示初始序列。
　　接下来M行，每行两个整数x,y (1<=x,y<=N)，表示要交换的两个整数。在一次交换中，如果x和y相等，则不会改变序列的内容。
输出格式
　　输出N行，为交换后的序列中的数。
样例输入
5 2
1 2 3 4 5
1 2
3 4
样例输出
2
1
4
3
5

#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int *a = new int[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < m; i++) {
        int p, q;
        cin >> p >> q;
        swap(a[p-1], a[q-1]);
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << endl;
    delete [] a;
    return 0;
}
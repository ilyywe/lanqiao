ADV-119 算法提高 6-9删除数组中的0元素
编写函数CompactIntegers，删除数组中所有值为0的元素，其后元素向数组首端移动。注意，CompactIntegers函数需要接收数组及其元素个数作为参数，函数返回值应为删除操作执行后数组的新元素个数。
　　输入时首先读入数组长度，再依次读入每个元素。
　　将调用此函数后得到的数组和函数返回值输出。
样例输入
7
2 0 4 3 0 0 5
样例输出
2 4 3 5
4

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if(t != 0) {
            cout << t << " ";
            cnt++;
        }
    }
    cout << endl << cnt;
    return 0;
}
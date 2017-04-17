ALGO-39 算法训练 数组排序去重 
问题描述
　　输入10个整数组成的序列，要求对其进行升序排序，并去掉重复元素。
输入格式
　　10个整数。
输出格式
　　多行输出，每行一个元素。
样例输入
2 2 3 3 1 1 5 5 5 5
样例输出
1
2
3
5


#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a[10];
    for(int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    sort(a, a+10);
    cout << a[0] << endl;
    for(int i = 1; i < 10; i++) {
        if(a[i] != a[i-1]) {
            cout << a[i] << endl;
        }
    }
    return 0;
}

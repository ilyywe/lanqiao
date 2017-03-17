ADV-73 算法提高 数组输出 　
输入一个3行4列的数组，找出该数组中绝对值最大的元素、输出该元素及其两个下标值。如有多个输出行号最小的，还有多个的话输出列号最小的。
样例输入
1 2 3 5
-2 5 8 9
6 -7 5 3
样例输出
9 2 4

#include <iostream>
using namespace std;
int main() {
    int m = 0, x = 1, y = 1;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            int temp;
            cin >> temp;
            if(temp < 0)
                temp = 0 - temp;
            if(temp > m) {
                m = temp;
                x = i+1;
                y = j+1;
            }
        }
    }
    cout << m << " " << x << " " << y;
    return 0;
}
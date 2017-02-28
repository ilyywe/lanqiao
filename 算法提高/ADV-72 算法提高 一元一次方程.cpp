算法提高 一元一次方程
　　输入一元一次方法的ax+b=0的解。且数据均在double类型以内,且一定有解（保留2位小数）
样例输入
2 6
样例输出
-3.00

#include <iostream>
using namespace std;
int main() {
	double ans;
	double a, b;
	cin >> a >> b;
	ans = (0 - b) / a;
	printf("%.2lf", ans);
	return 0;
}
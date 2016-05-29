算法训练 瓷砖铺放
问题描述
　　有一长度为N(1<=Ｎ<=10)的地板，给定两种不同瓷砖：一种长度为1，另一种长度为2，数目不限。要将这个长度为N的地板铺满，一共有多少种不同的铺法？
　　例如，长度为4的地面一共有如下5种铺法：
　　4=1+1+1+1
　　4=2+1+1
　　4=1+2+1
　　4=1+1+2
　　4=2+2
　　编程用递归的方法求解上述问题。
输入格式
　　只有一个数N，代表地板的长度
输出格式
　　输出一个数，代表所有不同的瓷砖铺放方法的总数
样例输入
4
样例输出
5


#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> v(n+1);
	v[0] = 1, v[1] = 1;
	for(int i = 2; i <= n; i++) {
		v[i] = v[i-1] + v[i-2];
	}
	cout << v[n];
	return 0;
}


#include <iostream>
using namespace std;
int cnt = 0;

void dfs(int n) {
    if(n == 1) {
        cnt++;
        return ;
    }
    if(n == 2) {
        cnt++;
        dfs(n - 1);
        return ;
    }
    dfs(n-1);
    dfs(n-2);
}
int main() {
    int n;
    cin >> n;
    dfs(n);
    cout << cnt;
    return 0;
}
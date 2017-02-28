算法提高 拿糖果
问题描述
　　妈妈给小B买了N块糖！但是她不允许小B直接吃掉。
　　假设当前有M块糖，小B每次可以拿P块糖，其中P是M的一个不大于根号下M的质因数。这时，妈妈就会在小B拿了P块糖以后再从糖堆里拿走P块糖。然后小B就可以接着拿糖。
　　现在小B希望知道最多可以拿多少糖。
输入格式
　　一个整数N
输出格式
　　最多可以拿多少糖
样例输入
15
样例输出
6
数据规模和约定
N <= 100000

分析：创建一个满足不大于根号下最大值MAXN的素数表，然后对素数表里面的数逐个遍历~
构建一个dp[i],表示当糖果数量为i的时候所能拿的最多的糖果数量~
对于dp[i]的值：因为小B只能每次拿不大于根号下i的质因数，所以对于质数表里的每一个数字，如果已经超过根号i则break;
遍历素数表中满足条件的素数（prime[j] <= sqrt(i) && i % prime[j] == 0），更新dp[i]的值为（dp[i-2*prime[j]] + prime[j]）的最大值~
即：dp[i] = max(dp[i], dp[i-2*prime[j]] + prime[j]);


#include <iostream>
#include <cmath>
using namespace std;
int prime[50000];
int dp[100005];
int book[100005];
int cnt = 0;

void create() {
	int len = sqrt(100005);
    for(int i = 2; i <= len; i++) {
        if(book[i] == 0) {
            prime[cnt++] = i;
            for(int j = i * i; j <= len; j = j + i)
                book[j] = 1;
        }
    }
}

int main() {
    create();
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < cnt; j++) {
            if(prime[j] > sqrt(i))
                break;
            if(i % prime[j] == 0)
                dp[i] = max(dp[i], dp[i-2*prime[j]] + prime[j]);
        }
    }
    cout << dp[n];
    return 0;
}
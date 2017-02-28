算法提高 身份证排序 
问题描述
　　安全局搜索到了一批(n个)身份证号码，希望按出生日期对它们进行从大到小排序，如果有相同日期，则按身份证号码大小进行排序。身份证号码为18位的数字组成，出生日期为第7到第14位
输入格式
　　第一行一个整数n，表示有n个身份证号码
　　余下的n行，每行一个身份证号码。
输出格式
　　按出生日期从大到小排序后的身份证号，每行一条
样例输入
5
466272307503271156
215856472207097978
234804580401078365
404475727700034980
710351408803093165
样例输出
404475727700034980
234804580401078365
215856472207097978
710351408803093165
466272307503271156
数据规模和约定
　　n<=100000

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int cmp1(string a, string b) {
    string bira = a.substr(6, 8);
    string birb = b.substr(6, 8);
    if(bira != birb) {
        return bira > birb;
    } else {
        return a > b;
    }
    return 0;
}
int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), cmp1);
    for(int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }
    return 0;
}
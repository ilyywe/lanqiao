算法提高 分数统计
问题描述
　　2016.4.5已更新此题，此前的程序需要重新提交。
问题描述
　　给定一个百分制成绩T，将其划分为如下五个等级之一：
　　90~100为A，80~89为B，70~79为C，60~69为D，0~59为E
　　现在给定一个文件inp，文件中包含若干百分制成绩（成绩个数不超过100），请你统计五个等级段的人数，并找出人数最多的那个等级段，按照从大到小的顺序输出该段中所有人成绩（保证人数最多的等级只有一个）。要求输出到指定文件oup中。
输入格式
　　若干0~100的正整数，用空格隔开
输出格式
　　第一行为5个正整数，分别表示A,B,C,D,E五个等级段的人数
　　第二行一个正整数，表示人数最多的等级段中人数
　　接下来一行若干个用空格隔开的正整数，表示人数最多的那个等级中所有人的分数，按从大到小的顺序输出。
样例输入
100 80 85 77 55 61 82 90 71 60
样例输出
2 3 2 2 1
3
85 82 80


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int cmp1(int a, int b) {return a > b; }
int main() {
    vector<vector <int> > v(5);
    int s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(s >= 90 && s <= 100) {
            v[0].push_back(s);
        } else if(s >= 80 && s <= 89) {
            v[1].push_back(s);
        } else if(s >= 70 && s <= 79) {
            v[2].push_back(s);
        } else if(s >= 60 && s <= 69) {
            v[3].push_back(s);
        } else {
            v[4].push_back(s);
        }
    }
    int maxn = 0, index = -1;
    for(int i = 0; i < 5; i++) {
        cout << v[i].size() << " ";
        if(v[i].size() > maxn) {
            maxn = v[i].size();
            index = i;
        }
    }
    cout << endl << maxn << endl;
    sort(v[index].begin(), v[index].end(), cmp1);
    for(int i = 0; i < v[index].size(); i++) {
        cout << v[index][i] << " ";
    }
    return 0;
}
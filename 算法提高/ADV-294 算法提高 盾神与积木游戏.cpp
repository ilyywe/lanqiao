算法提高 盾神与积木游戏
问题描述
　　最近的m天盾神都去幼儿园陪小朋友们玩去了~
　　每个小朋友都拿到了一些积木，他们各自需要不同数量的积木来拼一些他们想要的东西。但是有的小朋友拿得多，有的小朋友拿得少，有些小朋友需要拿到其他小朋友的积木才能完成他的大作。如果某个小朋友完成了他的作品，那么他就会把自己的作品推倒，而无私地把他的所有积木都奉献出来；但是，如果他还没有完成自己的作品，他是不会把积木让出去的哟~
　　盾神看到这么和谐的小朋友们感到非常开心，于是想帮助他们所有人都完成他们各自的作品。盾神现在在想，这个理想有没有可能实现呢？于是把这个问题交给了他最信赖的你。
输入格式
　　第一行为一个数m。
　　接下来有m组数据。每一组的第一行为n，表示这天有n个小朋友。接下来的n行每行两个数，分别表示他现在拥有的积木数和他一共需要的积木数。
输出格式
　　输出m行，如果第i天能顺利完成所有作品，输出YES，否则输出NO。
样例输入
2
2
2 2
1 3
3
1 5
3 3
0 4
样例输出
YES
NO
数据规模和约定
　　1<=n<=10000，1<=m<=10。

#include <iostream>
#include <algorithm>
using namespace std;
struct node {
    int t1;
    int t2;
    int res;
};

int cmp1(node p, node q) {
    return p.res > q.res;
}

int main() {
    int m, n;
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> n;
        int t = 0;
        int flag = 0;
        node *a = new node[n];
        for(int j = 0; j < n; j++) {
            cin >> a[j].t1 >> a[j].t2;
            a[j].res = a[j].t1 - a[j].t2;
            if(a[j].res >= 0) {
                a[j].res = -99999999;
                t += a[j].t1;
            }
        }
        sort(a, a+n, cmp1);
        int k = 0;
        while(a[k].res != -99999999) {
            t += a[k].res;
            if(t < 0) {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
            t += a[k].t2;
            k++;
        }
        if(flag == 0)
            cout << "YES" << endl;
    }
    return 0;
}
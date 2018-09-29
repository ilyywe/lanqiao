#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        int h, m;
        h = t / 3600;
        t = t % 3600;
        m = t / 60;
        t = t % 60;
        printf("%02d:%02d:%02d\n", h, m, t);
    }
    return 0;
}
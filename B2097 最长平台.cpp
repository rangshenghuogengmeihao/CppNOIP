/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main() {
    int n,a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int maxn = 0,t=0;
    for (int i = 1; i <= n; i++) {
        if (a[i-1] == a[i]) {
            t++;
        } else {
            maxn = max(maxn,t);
            t = 0;
        }
    }
    cout << maxn+1 << endl;
    return 0;
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main() {
    int n,k,maxn=-1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        a[k]++;
        maxn = max(maxn,k);
    }
    for (int i = 0; i <= maxn; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
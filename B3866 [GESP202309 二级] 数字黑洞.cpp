/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<bits/stdc++.h>
using namespace std;
int a[3];
int main() {
    int n,res=0;
    cin >> n;
    while (n != 495) {
        a[0] = n % 10;
        a[1] = n / 10 % 10;
        a[2] = n / 100;
        sort(a,a+3);
        n = a[2]*100 + a[1]*10 + a[0]-(a[0]*100+a[1]*10+a[2]);
        res++;
    }
    cout << res << endl;
    return 0;
}
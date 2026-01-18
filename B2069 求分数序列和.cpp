/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main() {
    double s=0,t,q=2,p=1;
    int n;
    cin >> n;
    while (n--) {
        s += q/p;
        t = q + p;
        p = q;
        q = t;
    }
    printf("%.4f",s);
}
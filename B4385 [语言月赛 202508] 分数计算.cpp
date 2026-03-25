/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int p[100000],j[100000],s[100000];
int main(){
    int n,sum=0;
    cin >> n;
    for (int i=0; i<n; i++) cin >> p[i];
    for (int i=0; i<n; i++) cin >> j[i];
    for (int i=0; i<n; i++) cin >> s[i];
    for (int i=0; i<n; i++) sum+=max(0,s[i]-abs(p[i]-j[i]));
    cout<<sum;
    return 0;
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,a=0,e=0,c=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        int x,y,z;
        cin >> x >> y >> z;
        a+=8-x;
        e+=12-y;
        c+=1-z;
    }
    a/=8;
    e/=12;
    c/=1;
    cout << min(a,min(e,c));
    return 0;
}

/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int mian(){
    int n,a=0,b=0,c=0;
    cin >> n;
    for (int i=0;i<n;i++){
        int x,y,z;
        cin >> x >> y >> z;
        a += x;
        b += y;
        c += z;
    }
    cout << a << " " << b << " " << c;
    return 0;
}
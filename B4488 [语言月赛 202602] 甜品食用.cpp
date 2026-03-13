/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int a,b,x,y,m,c=0;
    cin >> a >> b >> x >> y >> m;
    if (x<y){
        if (m/x>=a){
            c += a;
            m -= a*x;
            c += m/y;
        }else{
            c += m/x;
        }
    }else{
        if (m/y>=b){
            c += b;
            m -= b*y;
            c += m/x;
        }else{
            c += m/y;
        }
    }
    cout << c;
    return 0;
}
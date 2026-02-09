/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    long long x,y,n;
    cin >> x >> y >> n;
    long long a = (x-1)*n;
    long long b = (n/10)*(y-1)+(n%10)*(x-1);
    if (a < b){
        cout << a;
    }else {
        cout << b;
    }
    return 0;
}
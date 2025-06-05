/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main(){
    int x,n,a;
    cin >> x >> n;
    a = (x+n)%7;
    if (a == 0){
        cout << 7;
    }
    else{
        cout << a;
    }
    return 0;
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if (b%5==3){
        cout << 0;
    }else if (b%5==4) {
        cout << 4;
    }else if (b%5==0) {
        cout << 3;
    }else if (b%5==1) {
        cout << 2;
    }else if (b%5==2) {
        cout << 1;
    }
    return 0;
}
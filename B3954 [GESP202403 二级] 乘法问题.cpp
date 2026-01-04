/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,a;
    long long b=1;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a;
        b *= a;
    }
    if (b > 1000000){
        cout << ">1000000";
    }else{
        cout << b;
    }
    return 0;
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    long long n,a=0;
    cin>>n;
    while(n){
        a=a*100+n%100;
        n/=100;
    }
    cout<<a;
    return 0;
}
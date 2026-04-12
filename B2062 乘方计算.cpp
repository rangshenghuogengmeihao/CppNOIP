/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int a,n,b=1;
    cin>>a>>n;
    while(n--){
        b*=a;
    }
    cout<<b;
    return 0;
}
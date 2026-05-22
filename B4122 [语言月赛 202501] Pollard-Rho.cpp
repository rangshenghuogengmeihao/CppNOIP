/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int x,c,k;
    cin>>x>>c>>k;
    while(--k){
        x = (x*x+c)%10000;
    }
    cout<<x<<endl;
    return 0;
}

/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int l,r;
    cin>>l>>r;
    int cnt=0;
    for(int i=l;i<=r;i++){
        for(int j=1;j*j<=i;j++){
            if(j*j==i){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
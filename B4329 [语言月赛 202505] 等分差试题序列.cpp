/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[5001];
int main(){
    int n,max_len=2,len=2;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(n==2){
        cout<<2;
        return 0;
    }
    int d=a[2]-a[1];
    for(int i=3;i<=n;i++){
        int d1=a[i]-a[i-1];
        if(d1==d){
            len++;
        }else{
            len=2;
            d=d1;
        }
        max_len=max(max_len,len);
    }
    cout<<max_len;
    return 0;
}
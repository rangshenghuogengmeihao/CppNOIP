/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[101];
int main(){
    int n,max=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>max) max=a[i];
    }
    if(max==a[n]){ // Alice自己最高
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
    }else if(a[1]>a[n]){
        int t=a[1];
        a[1]=a[n];
        a[n]=t;
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
    }else{
        int t=max;
        max=a[1];
        a[1]=t;
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
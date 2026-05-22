/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[1001];
int main(){
    int n,cnt=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        bool flag=true;
        for(int j=i+1;j<=n;j++){
            if(a[i]<=a[j]){
                flag=false;
                break;
            }
        }
        if(flag){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
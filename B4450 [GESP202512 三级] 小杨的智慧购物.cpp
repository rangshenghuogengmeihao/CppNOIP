/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[100001];
int main(){
    int m,n,sum=0;
    cin>>m>>n;
    while(n--){
        int k,p;
        cin>>k>>p;
        if (a[k]==0 || a[k]>p){
            a[k]=p;
        }
    }
    for(int i=1;i<=m;i++){
        sum+=a[i];
    }
    cout<<sum;
    return 0;
}
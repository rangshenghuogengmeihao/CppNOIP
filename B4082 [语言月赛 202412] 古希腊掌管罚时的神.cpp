/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    long long n,time=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        if(b==1){
            time+=a;
        }else{
            time+=20;
        }
    }
    cout<<time;
    return 0;
}
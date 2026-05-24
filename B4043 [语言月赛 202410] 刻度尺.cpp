/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cin >> n >> a >> b;
    bool flag=false;
    for(int i=0;i<=n;i++){
        if(i==a-b||i==a+b){
            cout<<i<<" ";
            flag=true;
        }
    }
    if(!flag){
        cout<<"No solution";
    }
    return 0;
}
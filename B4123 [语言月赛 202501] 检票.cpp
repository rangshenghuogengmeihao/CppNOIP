/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int t[10001];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    for(int i=0;i<n;i++){
        if(t[i]<=15){
            cout<<t[i]<<" ";
        }
    }
    for(int i=0;i<n;i++){
        if(t[i]>15){
            cout<<t[i]<<" ";
        }
    }
    return 0;
}
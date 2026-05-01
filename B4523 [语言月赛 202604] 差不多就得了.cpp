/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=0;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(a<b){
            a+=x;
            cout<<"A";
        }else{
            b+=x;
            cout<<"B";
        }
    }
    return 0;
}
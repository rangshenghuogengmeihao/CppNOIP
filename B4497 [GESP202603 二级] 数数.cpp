/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int l,r,c=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        int s=0;
        int t=i;
        while(t){
            if(t%10==2){
                s++;
            }
            t/=10;
        }
        if(s==3){
            c++;
        }
    }
    cout<<c;
    return 0;
}
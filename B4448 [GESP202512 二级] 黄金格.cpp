/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int h,w,x,cnt=0;
    cin>>h>>w>>x;
    for(int r=1;r<=h;r++){
        for(int c=1;c<=w;c++){
            if(sqrt(r*r+c*c)<=x+r-c){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
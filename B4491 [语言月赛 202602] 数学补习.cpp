/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int x,y,z,cnt=0;
    cin>>x>>y>>z;
    int p=x,q=y;
    for(int i=10;i<=99;i++){
        for(int j=10;j<=99;j++){
            int x=i,y=j;
            for(int c=0;c<z;c++){
                if((x+y)%2==1){
                    x-=y%x;
                }else{
                    y-=x%y;
                }
                if(x<c){
                    x+=(y/2)+1;
                }
                if(y<c){
                    y+=(x/2)+1;
                }
            }
            if(x==p&&y==q){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
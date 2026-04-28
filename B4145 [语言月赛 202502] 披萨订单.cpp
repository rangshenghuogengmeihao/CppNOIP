/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int x,y,k,cnt=0,max=0;
    cin>>x>>y>>k;
    for(int b=0;b<=x;b++){
        for(int p=1;p<=y;p++){
            for(int z=0;z<=k;z++){
                if(((b+p)^z)>max){
                    max=((b+p)^z);
                    cnt=1;
                }else if(((b+p)^z)==max){
                    cnt++;
                }
            }
        }
    }
    cout<<max<<endl<<cnt;
    return 0;
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1&&j%4==2){
                cout<<".";
            }else if(i==n&&j%4==0){
                cout<<".";
            }else if(i!=1&&i!=n&&j%2==0){
                cout<<".";
            }else{
                cout<<"x";
            }
        }
        cout<<endl;
    }
    return 0;
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,k,d,a,s=0,res=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        scanf("%d/%d/%d",&k,&d,&a);
        int s1=0;
        if (k-d >= 10){
            s1 = k*(k-d)+a;
        }else if(k >=d){
            s1 = (k-d+1)*3+a;
        }else{
            s1 = a*2;
        }
        if(s1>s){
            s = s1;
            res = i;
        }
    }
    cout << res;
    return 0;
}
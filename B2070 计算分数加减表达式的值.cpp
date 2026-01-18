/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    double n,s=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        if (i%2==1){
            s+=1.0/i;
        }else {
            s-=(double)1/i;
        }
        
    }
    printf("%.4f",s);
}
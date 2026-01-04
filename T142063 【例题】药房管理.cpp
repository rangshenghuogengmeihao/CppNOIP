/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main() {
  int m,n,count=0;
  cin>>m>>n;
  for(int i=1;i<=n;i++){
    int a;
    cin>>a;
    m-=a;
    if(m<0){
        count++;
        m+=a;
    }
  }
  cout<<count;
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[100];
int main(){
  int n,m,count=0;
  cin >> n;
  for (int i=0;i<n;i++) {
    cin >> a[i];
  }
  cin >> m;
  for (int i=0;i<n;i++){
    if (a[i]==m){
        count++;
    }
  }
  cout << count;
  return 0;
}
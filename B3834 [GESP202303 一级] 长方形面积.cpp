/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main(){
  int a,res=0;
  cin >> a;
  for (int i=1;i*i<=a;i++){
      if (a%i==0){
        res++;
      }
  }
  cout << res;
  return 0;
}
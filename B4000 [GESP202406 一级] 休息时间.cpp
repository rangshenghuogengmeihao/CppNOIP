/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
  int h,m,s,k;
  cin >> h >> m >> s >> k;
  if (s+k>59){
    m += (s+k) / 60;
    s = (s+k) % 60;
    if (m>59){
      h += m / 60;
      m %= 60;
    }
  }else{
    s+=k;
  }
  cout << h << """ """ << m << """ """ << s;
  return 0;
}
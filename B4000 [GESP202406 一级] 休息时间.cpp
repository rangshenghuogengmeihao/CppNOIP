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
  cout << h << " " << m << " " << s;
  return 0;
}
/*
#include<iostream>
using namespace std;
int main(){
  int h,m,s,k;
  cin >> h >> m >> s >> k;
  int a = h*3600 + m*60 + s + k;
  h = a / 3600;
  m = (a % 3600) / 60;
  s = a % 60;
  cout << h << " " << m << " " << s;
  return 0;
}
*/
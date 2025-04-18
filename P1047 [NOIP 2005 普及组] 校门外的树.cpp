/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int t[10000];
int main() {
  int l,m;
  cin >> l >> m;
  for (int i = 0;i < m;i++) {
    int x,y;
    cin >> x >> y;
    for (int j = x;j <= y;j++) {
        t[j]=1;
    }
  }
  int a = 0;
  for (int i = 0;i <= l;i++) {
    if (t[i]==0) {
      a++;
    }
  }
  cout << a;
  return 0;
}
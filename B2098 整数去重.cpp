/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[20000];
int main() {
  int n,k;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> k;
    if (a[k]==0) {
      a[k]=1;
      cout << k << " ";
    }
  }
  return 0;
}
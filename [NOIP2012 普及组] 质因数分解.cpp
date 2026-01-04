/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main() {
  int n,a=0;
  cin >> n;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      cout << n/i;
      break;
    }
  }
}
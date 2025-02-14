/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int x = 100; x >= 1; x--) {
    for (int k = 1; k <= 100; k++) {
      if ((7*x+k*21)*52==n){
        cout<<x<<endl<<k;
        return 0;
      }
    }
  }
  return 0;
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
double S(int n) {
  double result = 0.0;
  for (int i = 1; i <= n; i++) {
    result += 1.0 / i;
  }
  return result;
}
int main() {
  int k;
  cin >> k;
  int n = 1;
  while (S(n) <= k) {
    n++;
    // if (n > 16) {
    //   break;
    // }
  }
  cout << n << endl;
}
#include <iostream>
using namespace std;
float fun(int n) {
  float result = 0;
  for (int i = 1; i <= n; i++) {
    result += 1.0 / i;
  }
  return result;
}
int main() {
  int k;
  cin >> k;
  //   cout << fun(n) << endl;
  for (int i = 1; i <= 15000; i++) {
    if (fun(i) > k) {
      cout << i << endl;
      break;
    }
  }
}
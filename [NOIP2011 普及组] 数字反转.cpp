/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main() {
  long long N;
  long long shang;
  long long result[10];
  long long result_num = 0;
  bool flag = true;
  cin >> N;
  if (N < 0) {
    flag = false;
    N = -N;
  }
  int i = 0;
  while (N > 0) {
    result[i] = N % 10;
    N /= 10;
    i++;
  }
  result[i] = N;
  if (flag == false) {
    cout << "-";
  }
  for (int j = 0; j < i; j++) {
    // cout << result[j];
    result_num = result_num * 10 + result[j];
  }
  cout << result_num << endl;
}
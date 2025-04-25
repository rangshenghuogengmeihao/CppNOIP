/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int a[6][6];
int t[6];
int main() {
  for (int i =1;i<=5;i++){
    for (int j =1;j<=5;j++){
      cin >> a[i][j];
    }
  }
  int x,y;
  cin >> x >> y;
  for (int i = 1;i<=5;i++){
    t[i] = a[x][i];
    a[x][i] = a[y][i];
    a[y][i] = t[i];
  }
  for (int i = 1;i<=5;i++){
    for (int j = 1;j<=5;j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}

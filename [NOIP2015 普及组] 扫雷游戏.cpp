/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
  int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
  int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
  int a, b, x, y;
  char temp;
  int res;
  cin >> a >> b;
//   int array[a + 1][b + 1];
//   char result[a + 1][b + 1];
  int array[101][101];
  char result[101][101];
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= b; j++) {
      cin >> temp;
      if (temp == '*') {
        array[i][j] = 1;
      } else {
        array[i][j] = 0;
      }
    }
  }

  //   for (int i = 1; i <= a; i++) {
  //     for (int j = 1; j <= b; j++) {
  //       cout << array[i][j];
  //     }
  //     cout << endl;
  //   }

  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= b; j++) {
      if (array[i][j] == 0) {
        res = 0;
        for (int k = 0; k < 8; k++) {
          x = i + dx[k];
          y = j + dy[k];
          //   cout << "debugK:" << k << endl;
          //   cout << "当前锁定格子i列:" << i << " j行:" << j << endl;
          //   cout << "dx:" << dx[k] << " dy:" << dy[k] << endl;
          //   cout << "遍历的x列:" << x << " y行:" << y << endl;
          if (array[x][y] == 1) {
            res += 1;
          }
          //   cout << "res:" << res << endl;
          //   cout << endl;
        }
        result[i][j] = char(res + '0');
      } else {
        result[i][j] = '*';
        // cout << "i:" << i << " j:" << j << "*****" << endl << endl;
      }
    }
  }

  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= b; j++) {
      cout << result[i][j];
    }
    cout << endl;
  }
}
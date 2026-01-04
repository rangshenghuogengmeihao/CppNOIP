/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<bits/stdc++.h>
using namespace std;
int a[15] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main() {
  int y, m, d, h, k;
  cin >> y >> m >> d >> h >> k;
  if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
    a[2] = 29;      // 闰年的 2 月是 29 天
  h += k;           // 总的时间
  if (h >= 24) {    // 有无超过 24 小时
    d++;            // 超过 24 小时，d 加一天
    h = h - 24;      // h 减掉 24
    if (d > a[m]) { // 天数超过了当月的最多天数
      m++;          // 月份增加 1
      d = 1;        // 日期是 1 号
      if (m > 12) { // 月份大于 12 月
        y++;        // 年份增加 1
        m = 1;      // 月份是 1 月
      }
    }
  }
  printf("%d %d %d %d", y, m, d, h);
  return 0;
}
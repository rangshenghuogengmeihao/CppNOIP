/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int m;
    cin >> m;
    cout << "MON TUE WED THU FRI SAT SUN" << endl;
    int monthday[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int d = 0;
    for (int i = 1; i < m; i++){
        d += monthday[i];
    }
    int a = (d+2) % 7;// 1月1日是周三，a表示每月空格的数量
    // cout << a << endl;
    for (int i = 0; i < a; i++) cout << "    ";
    for (int i = 1; i <= monthday[m]; i++){
        if (i>1 && (i+a-1)%7 == 0){ // 阻止1号周一换行
            cout << endl;
        }
        printf("%3d ",i);
    }
    return 0;
}
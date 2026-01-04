/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main() {
    int h,m,s;
    char c;
    cin >> h >> m >> s >> c;
    if (c == 'A') {
        cout << h*3600 + m*60 + s << endl;
    } else {
        cout << h*3600 + m*60 + s + 12*3600 << endl;
    }
    return 0;
}
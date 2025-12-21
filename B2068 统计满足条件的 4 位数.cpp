/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        int a = m / 1000;
        int b = m / 100 % 10;
        int c = m / 10 % 10;
        int d = m % 10;
        if (d - a - b - c > 0){
            count++;
        }
    }
    cout << count;
    return 0;
}
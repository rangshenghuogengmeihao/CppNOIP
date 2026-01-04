/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main() {
    int n,r;
    cin >> n >> r;
    string res = "";
    while (n!=0) {
        int a = n % r; 
        n = n / r;
        char ch;
        if (a<=9){
            ch = '0' + a;
        }else{
            ch = 'A' + a - 10;
        }
        res = ch + res;
    }
    cout << res;
}
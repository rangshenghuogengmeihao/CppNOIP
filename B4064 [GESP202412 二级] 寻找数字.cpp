/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main(){
    int t,a;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a;
        int flag = 0;
        for (int j = 1; j*j*j*j <= a; j++) {
            if (j*j*j*j == a) {
                flag = 1;
                cout << j << endl;
                break;
            }
        }
        if (flag == 0) {
            cout << -1 << endl;
        } 
    }
    return 0;
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++) {
        int p;
        cin >> p;
        if (p<=10){
            cout << "R" << endl;
        }else if (10<p&&p<=20) {
            cout << "L" << endl;
        }else {
            cout << p << endl;
        }
    }
    return 0;
}
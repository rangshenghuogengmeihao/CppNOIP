/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    long long y,t;
    cin >> y >> t;
    if (t==0) {
        cout << "NO" << endl;
        cout << "YES" << endl;
    }else{
        if (y>=0){
            cout << "NO" << endl;
        }else {
            if (t%2==0){
                cout << "NO" << endl;
            }else {
                cout << "YES" << endl;
            }
        }
        if (y%2==0){
            cout << "NO" << endl;
        }else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
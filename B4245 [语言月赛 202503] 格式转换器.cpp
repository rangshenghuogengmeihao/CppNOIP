/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        int a;
        cin >> a;
        if (i==n){
            cout << a;
        }else {
            cout << a << ",";
        }
    }
    return 0;
}
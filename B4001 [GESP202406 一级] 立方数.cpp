/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    for (int i=1;i*i*i<=n;i++){
        if (i*i*i==n){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}
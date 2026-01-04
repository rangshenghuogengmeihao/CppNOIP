/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[10001];
int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a[i];
        if (a[i]%2==1){
            cout << a[i] << " ";
        }
    }cout << endl;
    for (int i=0;i<n;i++){
        if (a[i]%2==0){
            cout << a[i] << " ";
        }
    }
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[1000];
int main(){
    int n,d,b;
    cin >> n >> d;
    for (int i=1;i<=d;i++) {
        cin >> b;
        a[b]+=i;
    }
    for (int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}
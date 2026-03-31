/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[5001];
int main(){
    int n,m;
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    int index=1;
    while(m--){
        index -= a[index];
        while(index<1){
            index += n;
        }
    }
    cout << index;
    return 0;
}
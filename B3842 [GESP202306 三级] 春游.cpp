/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int a[1010];
int main(){
    int n,m,b,count=0;
    cin >> n >> m;
    for (int i=0;i<m;i++){
        cin >> b;
        a[b] = 1;
    }
    for (int i=0;i<n;i++){
        if (a[i]==1){
            count++;
        }
    }
    if (count == n){
        cout << n;
    } else{
        for (int i=0;i<n;i++){
            if (a[i] != 1){
                cout << i << " ";
            }
        }
    }
    return 0;
}
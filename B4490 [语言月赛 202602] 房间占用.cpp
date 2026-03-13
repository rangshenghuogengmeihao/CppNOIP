/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[101];
int main(){
    int n,k;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    cin >> k;
    if (a[k]==0){
        cout << k;
    }else{
        for (int i=1;i<=n;i++){
            if (a[i]==0){
                cout << i;
                break;
            }
        }
    }
    return 0;
}
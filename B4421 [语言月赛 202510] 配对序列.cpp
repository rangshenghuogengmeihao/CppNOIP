/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        bool flag = true;
        for(int i=1;i<n;i++){ //结尾越界问题
            if(i%2==1 && a[i] != a[i+1]){
                flag = false;
                break;
            }
            if(i%2==0 && a[i] == a[i+1]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}
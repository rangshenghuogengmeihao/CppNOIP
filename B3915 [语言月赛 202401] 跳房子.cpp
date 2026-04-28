/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[1000001];
int main(){
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(n==1) {
        cout << "Yes" << endl << 0;
    }else{
        for(int i=1;i<=n;){
        i+=a[i];
        cnt++;
        if(i==n){
            cout << "Yes" << endl;
            cout << cnt;
            return 0;
        }
    }
    cout << "No" << endl;
    cout << cnt;
    }
    
    return 0;
}
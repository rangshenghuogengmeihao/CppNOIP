/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[10001];
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=2*n;i++){
        cin >> a[i];
    }
    bool flag = true;
    for(int i=1;i<=2*n;i++){
        if(a[a[i]]!=i || a[i]==i){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
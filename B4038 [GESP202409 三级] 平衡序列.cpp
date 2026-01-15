/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n],s=0,s2=0;
        for (int i=0;i<n;i++){
            cin >> a[i];
            s += a[i];
        }
        bool flag=false;
        for (int i=0;i<n;i++){
            s2+=a[i];
            if (s2*2==s){
                cout << "Yes" << endl;
                flag = true;
                break;
            }
        }
        if (flag==false){
            cout << "No" << endl;
        }
    }
    return 0;
}
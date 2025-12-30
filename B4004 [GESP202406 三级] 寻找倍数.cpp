/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], maxa = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            maxa = max(maxa, a[i]);
        }
        bool flag = true;
        for(int i = 0; i < n; i++){
            if(maxa % a[i] != 0){
                flag = false;
                break;
            }
        }
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
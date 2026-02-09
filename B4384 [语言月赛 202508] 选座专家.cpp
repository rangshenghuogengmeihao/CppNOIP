/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n,s=0;
        cin >> n;
        for (int i=1;i<=n;i++){
            int c;
            cin >> c;
            for (int j=1;j<=c;j++){
                if (i == 1 || j == 1 || j == c || i*j%10==6) {
                    s++;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}
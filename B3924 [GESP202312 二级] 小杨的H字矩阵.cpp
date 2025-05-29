/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (j == 1 || j == n){
                cout << "|";
            }
            else{
                if (i != (n+1)/2){
                    cout << "a";
                }
                else{
                    cout << "-";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
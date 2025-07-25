/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin >> n;
    while(n--){
        int a,flag=0;
        cin >> a;
        for (int j=1;j*j<=a;j++){
            for (int k=1;k*k<=a;k++){
                if (j*j+k*k==a){
                    flag=1;
                    cout << "Yes" << endl;
                    break;
                }
            }
            if (flag==1){
                break;
            }
        }
        if (flag==0){
            cout << "No" << endl;
        }
    }
    return 0;
}
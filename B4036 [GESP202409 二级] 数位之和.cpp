/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main(){
    int n,a;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a;
        int sum = 0;
        while (a > 0){
            sum += a % 10;
            a /= 10;
        }
        if (sum % 7 == 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}
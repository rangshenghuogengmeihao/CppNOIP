/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,cnt=0;
    cin >> n;
    while (n--){
        int a;
        cin >> a;
        while (a>0){
            if (a%2==1){
                cnt++;
            }
            a/=2;
        }
    }
    cout << cnt << " " << cnt%2 << endl;
}
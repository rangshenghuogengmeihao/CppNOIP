/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main(){
    int n,x,cnt=0;
    cin >> n >> x;
    while (--n) {
        int new_x;
        cin >> new_x;
        if (x%2!=new_x%2){
            cnt++;
            x=new_x;
        }
    }
    cout << cnt;
}
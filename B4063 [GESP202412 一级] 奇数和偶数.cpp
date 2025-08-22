/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main(){
    int n,j=0,o=0;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        if (a%2==0){
            o++;
        }else {
            j++;
        }
    }
    cout << j << " " << o;
    return 0;
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main(){
    int n,max=0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        int a;
        cin >> a;
        if (a>max) max=a;
    }
    cout << max;
}
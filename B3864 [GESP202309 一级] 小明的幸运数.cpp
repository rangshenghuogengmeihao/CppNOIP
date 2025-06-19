/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main(){
    int k,l,r,res=0;
    cin >> k >> l >> r;
    for (int i=l;i<=r;i++){
        if (i%k==0 || i%10==k){
            res+=i;
        }
    }
    cout << res;
    return 0;
}
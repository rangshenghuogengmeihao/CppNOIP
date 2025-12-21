/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,r,max_k=0;
    cin >> n >> r;
    while(n--){
        int k,p;
        cin >> k >> p;
        if (p<=r && k>max_k){
            max_k=k;
        }
    }
    cout << max_k;
    return 0;
}
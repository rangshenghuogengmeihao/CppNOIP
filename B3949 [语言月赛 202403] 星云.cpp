/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,k,count=0;
    cin >> n >> k;
    int a = pow(10,n);
    for (int i=1;i<a;i++){
        int b=i,s=0;
        while (b){
            s += b % 10;
            b /= 10;
        }
        if (s<=k){
            count++;
        }
    }
    cout << count;
    return 0;
}
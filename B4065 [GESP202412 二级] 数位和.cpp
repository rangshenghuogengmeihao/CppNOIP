/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    long long a;
    int n,res=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        int s = 0;
        while (a>0) {
            s+=a%10;
            a/=10;
        }
        if (s>res){
            res = s;
        }
    }
    cout << res;
    return 0;
}
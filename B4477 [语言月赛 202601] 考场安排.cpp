/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    long long n,m,count=0,s=0;
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        long long r,c;
        cin >> r >> c;
        m -= r*c;
        if (m>0){
            count++;
        }else{
            count++;
            break;
        }
    }
    cout << count*2;
    return 0;
}
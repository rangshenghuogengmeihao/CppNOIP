/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        sum+=(1+i)*i/2;
    }
    cout << sum << endl;
    return 0;
}
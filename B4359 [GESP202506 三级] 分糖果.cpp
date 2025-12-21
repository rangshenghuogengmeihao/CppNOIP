/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int a[1005];
int main(){
    long long n,cnt=0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    cnt+=a[1];
    for (int i = 2; i <= n; i++){
        if (a[i]<=a[i-1]){
            a[i]=a[i-1]+1;
        }
        cnt+=a[i];
    }
    cout << cnt << endl;
}
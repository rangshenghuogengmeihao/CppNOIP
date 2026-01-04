/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<cmath>
#include<iostream>
using namespace std;
int a[1010];
int main(){
    int n,k,t,count=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> a[i];
    }
    for (int i=1;i<=n-1;i++){
        for (int j=i+1;j<=n;j++){
            k = a[i]+a[j];
            t = sqrt(k);
            if (t*t==k){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}
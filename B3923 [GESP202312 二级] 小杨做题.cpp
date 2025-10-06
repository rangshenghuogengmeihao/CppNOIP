/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
long long s[400],sum=0;
int main(){
    long long a,b,m,n;
    cin >> a >> b >> m >> n;
    s[1]=a;
    s[2]=b;
    for (int i=3;i<=n;i++){
        s[i]=s[i-1]+s[i-2];
        if (s[i]>=m){
            break;
        }
    }
    for (int i=1;i<=n;i++){
        sum+=s[i];
    }
    cout << sum;
    return 0;
}
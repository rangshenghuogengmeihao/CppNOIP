/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int t[51],s[51];
int main(){
    int n,x,y,sum=0;
    cin>>n;
    for(int i=1; i<n; i++) {
        cin>>t[i];
    }
    for(int i=1; i<=n; i++) {
        cin>>s[i];
    }
    cin >> x >> y;
    for (int i=x;i<=y;i++){
        if (i!=y){
            sum+=s[i]+t[i];
        } else {
            sum+=s[i];
        }
    }
    cout<<sum;
    return 0;
}
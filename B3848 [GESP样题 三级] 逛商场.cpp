/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[110];
int main(){
    int n,x,sum=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> a[i];
    }
    cin >> x;
    for (int i=1;i<=n;i++){
        if (a[i]<=x){
            x-=a[i];
            sum+=1;
        }
    }
    cout << sum << endl;
    return 0;
}
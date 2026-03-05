/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int b[1001];
int main(){
    int n,x,y,a,count=0,max1=0;
    cin >> n >> x >> y;
    for (int i=0;i<n;i++){
        cin >> a;
        if (x+y==a||x+a==y||y+a==x||x*y==a||x*a==y||y*a==x){
            count++;
            max1=max(max1,a);
        }
    }
    cout << count << " " << max1 << endl; 
    return 0;
}
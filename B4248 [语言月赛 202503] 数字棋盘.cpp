/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,m,x,y,cnt=0;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>a[i][j];
        }
    }
    cin>>x>>y;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(a[i][j]==x) {
                if((a[i-1][j]==y&&i>0)||
                (a[i+1][j]==y&&i<n-1)||
                (a[i][j-1]==y&&j>0)||
                (a[i][j+1]==y&&j<m-1)) {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
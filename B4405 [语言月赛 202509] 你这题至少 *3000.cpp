/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[100001];
int main(){
    int n,m,b,c=0;
    cin >> n >> m;
    for (int i=0;i<n;i++) {
        cin >> b;
        a[b] = 1;
        a[b+1] = 1;
    }
    for (int i=1;i<=m;i++){
        if (a[i]==0){
            c++;
        }
    }
    if (c==0){
        cout << "Accepted";
    }else {
        cout << c << endl;
        for (int i=1;i<=m;i++){
            if (a[i]==0){
                cout << i << " ";
            }
        }
    }
    return 0;
}
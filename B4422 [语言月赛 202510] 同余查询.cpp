/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[3000];
int b[3000];
int main(){
    int n,q;
    cin >> n >> q;
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    for (int i=0;i<q;i++) {
        int m;
        cin >> m;
        for (int j=0;j<3000;j++) {
            b[j] = 0;//初始化数组
        }
        for (int j=0;j<n;j++){
            b[a[j]%m] = 1;//标记数组
        }
        int s = 0;
        for (int j=0;j<m;j++){
            if (b[j]==1) s++;
        }
        cout << s << endl;
    }
    return 0;
}
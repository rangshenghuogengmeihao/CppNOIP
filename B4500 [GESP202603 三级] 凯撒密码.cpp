/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    string a,b,c;
    cin >> a >> b >> c;
    int p = (a[0]-b[0]+26)%26;
    for (int i=0;i<c.length();i++){
        c[i] += p;
        if (c[i]>'Z') c[i] -= 26;
    }
    cout << c;
    return 0;
}
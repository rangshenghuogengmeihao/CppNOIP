/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<bits/stdc++.h>
using namespace std;
string a[101];
int b[101];
int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        string s;
        cin >> s;
        for (int i=0;i<s.size();i++){
            if (s[i]>='A' && s[i]<='Z'){
                s[i] += 32;
            }
        }
        a[i] = s;
    }
    for (int i=0;i<n;i++){
        int count = 0;
        for (int j=0;j<n;j++){
            if (a[i]==a[j]){
                count++;
            }
        }
        b[i] = count;
    }
    int max1 = 0;
    for (int i=0;i<n;i++){
        max1 = max(max1,b[i]);
    }
    for (int i=0;i<n;i++){
        if (b[i]==max1){
            cout << a[i] << endl;
            break;
        }
    }
    return 0;
}
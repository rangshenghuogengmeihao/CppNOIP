/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
long long a[1000000];
int main(){
    int n;
    long long maxa=0,mina=1000000000000000001;
    cin >> n;
    for (int i=0;i<n;i++){
      cin >> a[i];
      maxa = max(a[i],maxa);
      mina = min(a[i],mina);
    }
    for (int i=0;i<n;i++){
      cout << maxa - a[i] << " ";
    }cout << endl;
    for (int i=0;i<n;i++){
      cout << a[i] - mina << " ";
    }
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[100];
int main(){
    int n,k,x;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> k >> x;
    int v = 0;
    bool flag = false;
    for (int i=0;i<n;i++){
        if (v != k && a[i] == x){
            v++;
        }
        if (v == k && a[i] == x){
            flag = true;
            cout << i+1;
            break;//return 0;
        }
    }
    if (flag == false){
        cout << "Error";
    }
    return 0;
}
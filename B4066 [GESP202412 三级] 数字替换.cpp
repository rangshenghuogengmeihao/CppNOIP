/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[100000];
int main(){
    int n,k,min=100000,max=-100000;
    cin >> n >> k;
    for (int i=0;i<n;i++) {
        cin >> a[i];
        if (a[i]>max){
            max = a[i];
        }
        if (a[i]<min){
            min = a[i];
        }
    }
    for (int i=0;i<n;i++){
        if (a[i]>k){
            a[i] = max;
        }
        if (a[i]<k){
            a[i] = min;
        }
        cout << a[i] << " ";
    }
    return 0;
}
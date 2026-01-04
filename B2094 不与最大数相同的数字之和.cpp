/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != max) {
            sum += a[i];
        }
    }
    cout << sum;
    return 0;
}
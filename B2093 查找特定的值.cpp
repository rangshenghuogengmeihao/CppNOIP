/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;

int main() {
    int n,a[10000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x;
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
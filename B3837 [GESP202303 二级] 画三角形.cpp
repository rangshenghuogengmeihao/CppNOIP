/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    char c='A';
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << c;
            if (c == 'Z') {
                c = 'A';
            } else {
                c++;
            }
        }
        cout << endl;
    }
    return 0;
}
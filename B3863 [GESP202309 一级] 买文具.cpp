/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main() {
    int x, y, z, q;
    cin >> x >> y >> z >> q;
    if (2*x+5*y+3*z<q){
        cout << "Yes" << endl;
        cout << q-2*x-5*y-3*z << endl;
    } else {
        cout << "No" << endl;
        cout << 2*x+5*y+3*z-q << endl;
    }
    return 0;
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main() {
    int a,b,c=0;
    cin >> a >> b;
    for (int i=a;i<=b;i++) {
        bool flag=true;
        for (int j=2;j*j<=i;j++) {
            if (i%j==0) {
                flag=false;
                break;
            }
        }
        if (flag) {
            c++;
        }
    }
    cout << c;
    return 0;
}
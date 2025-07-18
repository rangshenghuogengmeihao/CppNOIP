/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main(){
    int n,k,count=0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        int a=i;
        while (a > 0) {
            if (a % 10 == k) {
                count++;
            }
            a /= 10;
        }
    }
    cout << count << endl;
    return 0;
}
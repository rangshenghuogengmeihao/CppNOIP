/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main() {
    int x,y,z,n,m,cnt=0;
    cin >> x >> y >> z >> n >> m;
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= m; j++) {
            int k = m - i - j;
            if (k >= 0 && k % z == 0 && i * x + j * y + k / z == n) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
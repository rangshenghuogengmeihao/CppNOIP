/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int l,r,cnt=0;
    cin >> l >> r;
    for (int i = l; i <= r; i++) {
        for (int x = 0;x <= 14;x++){
            bool flag=false;
            for (int y = 0;y <= 14;y++){
                if (pow(2,x)+pow(2,y)==i){
                    flag=true;
                    cnt++;
                    break;
                }
            }
            if (flag)
                break;
        }
    }
    cout << cnt;
    return 0;
}
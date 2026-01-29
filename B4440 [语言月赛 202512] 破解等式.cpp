/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int a,b,c,cnt = 0;
        cin >> a >> b >> c;
        for (int x=1;x<=a;x++){
            if (a % x == 0){
                for (int y=1;y<c;y++){
                    if (a/x+b*y==c){
                        cnt++;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
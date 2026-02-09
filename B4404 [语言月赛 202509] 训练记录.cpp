/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int a,d,h=0,cnt=0;
    cin >> d;
    for (int i=0;i<d;i++) {
        cin >> a;
        if (a==0){
            h+=100;
        }
        if (a==1){
            cnt++;
            if (cnt % 2 == 1){
                h+=50;
            }else {
                h-=30;
            }
        }
        cout << h << endl;
    }
    return 0;
}
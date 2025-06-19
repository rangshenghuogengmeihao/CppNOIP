/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main(){
    int a,b,res=0;
    cin >> a >> b;
    for (int i=a+1;i<b;i++){
        if (i%4==0 && i%100!=0 || i%400==0){
            res+=i;
        }
    }
    cout << res;
    return 0;
}
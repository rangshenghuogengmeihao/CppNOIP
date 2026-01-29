/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    for (int i=0;i<2025;i++){
        if ((x&i)+(x|i) == 2025){
            cout << i;
        }
    }
    return 0;
}
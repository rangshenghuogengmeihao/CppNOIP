/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    int i = 1;
    for (int i=1;;i++){
      if (i%m==0&&i%n==0){
        cout << i << endl;
        break;
      }
    }
}

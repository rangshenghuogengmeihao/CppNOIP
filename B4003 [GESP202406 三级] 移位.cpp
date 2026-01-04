/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=0;i<26;i++){
        char c = 'A'+(n+i)%26;
        cout << c;
    }
}
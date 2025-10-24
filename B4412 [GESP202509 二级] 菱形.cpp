/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if (j==(n+3)/2-i||j==(n+1)/2+i-1||j==(3*n+1)/2-i||j==i-n/2)
                cout << "#";
            else
                cout << ".";
        }
        cout << endl;
    }
    return 0;
}
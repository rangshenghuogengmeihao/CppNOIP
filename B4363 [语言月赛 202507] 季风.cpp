/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if (a > 0){
        if (b > 0){
            cout << "NorthEast";
        }
        else{
            cout << "NorthWest";
        }
    }
    else if (a < 0){
        if (b > 0){
            cout << "SouthEast";
        }
        else{
            cout << "SouthWest";
        }
    }
    return 0;
}
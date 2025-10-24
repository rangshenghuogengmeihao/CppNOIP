/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int m;
    cin >> m;
    for (int i=0;i<m;i++){
        int a,b,c=0,n=0;
        cin >> a;
        b = a;
        while (b>0){
            b /= 10;
            n++;
        }
        b = a;
        while (b>0){
            c += pow(b % 10,n);
            b /= 10;
        }
        if (c == a){
            cout << "T" << endl;
        }else{
            cout << "F" << endl;
        }
    }
    return 0;
}
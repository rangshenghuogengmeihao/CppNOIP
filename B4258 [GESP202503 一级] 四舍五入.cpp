/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n--){
        int a;
        cin >> a;
        if (a%10>=5){
            cout << (a/10+1)*10 << endl;
        }else{
            cout << a/10*10 << endl;
        }
    }
    return 0;
}
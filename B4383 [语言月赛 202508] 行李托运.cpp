/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=0;
    cin >> n;
    for (int i=0;i<n;i++){
        int p;
        cin >> p;
        if (p==0){
            a++;
            b++;
        }else if (p==-1) {
            a++;
        }else if (p==1) {
            break;
        }
    }
    cout << a << " " << b;
    return 0;
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int m,n;
    bool flag=false;
    cin>>m>>n;
    while(n--){
        int a,a1;
        cin>>a;
        a1=a;
        if (a%m!=0){
            int sum=0;
            while(a1){
                sum+=a1%10;
                a1/=10;
            }
            if (sum%m==0){
                cout << a << endl;
                flag=true;
            }
        }
    }
    if (!flag){
        cout << "None" << endl;
    }
    return 0;
}
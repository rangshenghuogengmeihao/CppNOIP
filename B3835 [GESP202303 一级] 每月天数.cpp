/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if (b==2){
        if (a % 400 == 0||a % 4 == 0&&a % 100 != 0)
            cout<<29;
        else
            cout<<28;
    }
    else if (b==4||b==6||b==9||b==11){
        cout<<30;
    }
    else{
        cout<<31;
    }
    return 0;
}
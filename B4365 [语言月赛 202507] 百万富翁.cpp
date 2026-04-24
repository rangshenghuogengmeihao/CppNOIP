/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    while (n--) {
        int a,b;
        cin >> a >> b;
        if(x>=y || x<a){
            break;
        }else{
            x=x-a+b;
        }
    }
    cout<<x<<endl;
    return 0;
}
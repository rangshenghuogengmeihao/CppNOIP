/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    string s,t;
    int q;
    cin>>s>>t>>q;
    while(q--) {
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(s.substr(l1-1,r1-l1+1)<t.substr(l2-1,r2-l2+1)) {
            cout<<"yifusuyi"<<endl;
        }else if(s.substr(l1-1,r1-l1+1)>t.substr(l2-1,r2-l2+1)) {
            cout<<"erfusuer"<<endl;
        }else {
            cout<<"ovo"<<endl;
        }
    }
    return 0;
}
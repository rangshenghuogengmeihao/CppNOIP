/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0, b=0, c=0;
        for(int i=0;i<s.length();i++){
            if(s.length()>=8){
                a=1;
            }
            if('A'<=s[i] && s[i]<='Z'){
                b=1;
            }
            if('0'<=s[i] && s[i]<='9'){
                c=1;
            }
        }
        if(a && b && c){
            cout<<"Y"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
    }
    return 0;
}
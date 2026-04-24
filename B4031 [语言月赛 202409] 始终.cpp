/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            if(s[i]==s[j]){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
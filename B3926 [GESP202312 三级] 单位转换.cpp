/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    while(n--){
        int x;
        string s1,s2,s3,s4;
        cin >> x >> s1 >> s2 >> s3 >> s4;
        if(s1=="m"&&s4=="mm"){
            a=x*1000;
        }else if(s1=="km"&&s4=="m"){
            a=x*1000;
        }else if(s1=="km"&&s4=="mm"){
            a=x*1000*1000;
        }else if(s1=="g"&&s4=="mg"){
            a=x*1000;
        }else if(s1=="kg"&&s4=="g"){
            a=x*1000;
        }else if(s1=="kg"&&s4=="mg"){
            a=x*1000*1000;
        }
        cout<<x<<" "<<s1<<" = "<<a<<" "<<s4<<endl;
    }
    return 0;
}
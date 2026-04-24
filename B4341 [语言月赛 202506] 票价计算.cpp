/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a1,b1,a2,b2,a3,b3,c;
    cin>>a1>>b1>>a2>>b2>>a3>>b3>>c;
    int time = max(b1,max(b2,b3));
    int s1=a1-(time-b1)*c;
    int s2=a2-(time-b2)*c;
    int s3=a3-(time-b3)*c;
    if (s1<=s2 && s1<=s3){
        cout << 1 << " " << s1;
    }else if (s2<=s1 && s2<=s3){
        cout << 2 << " " << s2;
    }else if (s3<=s1 && s3<=s2){
        cout << 3 << " " << s3;
    }
    return 0;
}
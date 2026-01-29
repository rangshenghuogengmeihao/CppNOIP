/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    string s;
    while(cin >> s){
        for (int i=0;i<s.length();i++){
            if (i % 2 == 0 && 'a'<=s[i] && s[i]<='z'){
                s[i] -= 32;
            }
            if (i % 2 == 1 && 'A'<=s[i] && s[i]<='Z'){
                s[i] += 32;
            } 
        }
        cout << s << " ";
    }
    return 0;
}

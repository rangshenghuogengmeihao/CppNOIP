/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int k,s=0;
    char c;
    cin>>k>>c;
    for(int r=0;r<=255;r++){
        for(int g=0;g<=255;g++){
            for(int b=0;b<=255;b++){
                if(c=='r'){
                    if(r>=g+k&&r>=b+k)
                    s++;
                }
                else if(c=='g'){
                    if(g>=r+k&&g>=b+k)
                    s++;
                }
                else if(c=='b'){
                    if(b>=r+k&&b>=g+k)
                    s++;
                }
            }
        }
    }
    cout<<s;
    return 0;
}
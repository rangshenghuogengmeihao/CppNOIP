/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    string n;
    cin >> n;
    for (int i=0;i<5;i++){
        string line="";
        for (char ch:n){
            if (ch == '0'){
                if (i==0 || i==4){
                    line += ".....";
                }else{
                    line += ".***.";
                }
            }else if (ch == '1'){
                line += "****.";
            }else if (ch == '2'){
                if (i==0 || i==2 || i==4){
                    line += ".....";
                }else if (i==1){
                    line += "****.";
                }else if (i==3){
                    line += ".****";
                }
            }else if (ch == '3'){
                if (i==0 || i==2 || i==4){
                    line += ".....";
                }else if (i==1 || i==3){
                    line += "****.";
                }
            }
        }
        cout << line << endl;
    }
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,a,b,c,count=0;
    cin >> n;
    for (int c=1;c<=n;c++){
        for (int b=1;b<=c;b++){
            for (int a=1;a<=b;a++){
                if (a*a+b*b==c*c){
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
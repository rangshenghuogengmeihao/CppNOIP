/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        int a;
        cin >> a;
        if (a%9==0 && a%8!=0){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
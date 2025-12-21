/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    float price=0;
    cin >> n;
    for (int i=0;i<n;i++){
        int t;
        cin >> t;
        price+=int((t+69)/70)*0.1;
    }
    printf("%.1f",price);
    return 0;
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,cnt = 0,max = 0;
    cin >> n;
    for (int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        if (90 <= a && a <= 140 && 60 <= b && b <= 90){
            cnt++;
        }else{
            if (cnt > max){
                max = cnt;
            }
            cnt = 0;
        }
    }
    cout << max;
    return 0;
}
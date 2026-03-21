/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        int j = i,index=0;
        int s[10]={0};
        while (j){
            s[index] = j%2;
            j /= 2;
            index++;
        }
        bool flag = true;
        for (int k=0;k<index/2;k++){
            if (s[k]!=s[index-k-1]){
                flag = false;
                break;
            }
        }
        if (flag){
            count++;
        }
    }
    cout << count;
    return 0;
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,cnt=0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        int a=i%10,j=i/10,k=0;
        while (j>0){
            if (a!=j%10){
                k=1;
                break;
            }
            j/=10;
        }
        if (k==0){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
/*
#include<iostream>
using namespace std;
int main(){
    int n,cnt=0;
    cin >> n;
    for (int i = 1; i <= 9; i++){
        int num=i;
        while (num<=n){
            cnt++;
            num = num*10+i;
        }
    }
    cout << cnt;
    return 0;
}
*/
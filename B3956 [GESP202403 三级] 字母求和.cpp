/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
char a[100010];
int main(){
    long long n,sum=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
        if (a[i] >= 'a' && a[i] <= 'z'){
            sum += a[i] - 'a' + 1;
        }
        if (a[i] >= 'A' && a[i] <= 'Z'){
            sum += -(a[i]);
        }
    }
    cout << sum;
    return 0;
}
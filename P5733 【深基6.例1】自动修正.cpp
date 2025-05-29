/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
#include <cstring>
using namespace std;
char a[110];
int main(){
    int l=0;
    cin >> a;
    l = strlen(a);
    for (int i=0;i<l;i++){
        if (a[i] >= 'a' && a[i] <= 'z'){
            a[i] = a[i] - 'a' + 'A';
        }
    }
    cout << a;
    return 0;
}
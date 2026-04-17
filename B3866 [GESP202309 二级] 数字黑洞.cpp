/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
#include<algorithm>
using namespace std;
int a[3];
int main() {
    int n,cnt=0;
    cin >> n;
    while (n != 495) {
        a[0] = n % 10;
        a[1] = n / 10 % 10;
        a[2] = n / 100;
        sort(a,a+3);
        n = (a[2]*100+a[1]*10+a[0]) - (a[0]*100+a[1]*10+a[2]);
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
/*
#include<iostream>
using namespace std;
int main() {
    int n,cnt=0;
    cin >> n;
    while (n != 495) {
        int a = n % 10;
        int b = n / 10 % 10;
        int c = n / 100;
        if (a > b){swap(a,b);}
        if (a > c){swap(a,c);}
        if (b > c){swap(b,c);}
        n = (c*100+b*10+a) - (a*100+b*10+c);
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
*/
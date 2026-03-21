/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n,a,b,c,d,e,f,g,h,i,j=0;
	cin >> n;
	a = n / 100000000 % 10;if (a==4) a=8;j = j*10+a;
	b = n / 10000000 % 10;if (b==4) b=8;j = j*10+b;
	c = n / 1000000 % 10;if (c==4) c=8;j = j*10+c;
	d = n / 100000 % 10;if (d==4) d=8;j = j*10+d;
	e = n / 10000 % 10;if (e==4) e=8;j = j*10+e;
	f = n / 1000 % 10;if (f==4) f=8;j = j*10+f;
	g = n / 100 % 10;if (g==4) g=8;j = j*10+g;
	h = n / 10 % 10;if (h==4) h=8;j = j*10+h;
	i = n / 1 % 10;if (i==4) i=8;j = j*10+i;
	cout << j;
    return 0;
    // int n,j=0,i=1; 	// int n,j=0;
	// cin >> n;
	// while (n>0){	// for (int i=1;n>0;i*=10){
	// 	int a = n % 10;
	// 	if (a==4) a=8;
	// 	j += a*i;
	// 	i *= 10;	// 不写
	// 	n /= 10;
	// }
	// cout << j;
}
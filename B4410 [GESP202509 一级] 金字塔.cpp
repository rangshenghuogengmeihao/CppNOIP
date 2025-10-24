/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
	int n,a = 0;
	cin >> n;
	while(n>=1){
		a+=n*n;
		n--;
	}
	cout << a;
}
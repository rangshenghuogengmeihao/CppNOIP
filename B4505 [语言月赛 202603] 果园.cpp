/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[1001];
int main(){
    int n,k,mb=0;
	cin >> n >> k;
	for (int i=1;i<=n;i++){
		cin >> a[i];
		if (i<=k&&mb<a[i]){
			mb=a[i];//存放最大值
		}
		if(i>k&&mb<a[i]){
			cout<<a[i];
			return 0;
		}
	}
	cout << a[n];
    return 0;
}
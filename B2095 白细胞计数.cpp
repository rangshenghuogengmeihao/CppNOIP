/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<bits/stdc++.h>
using namespace std;
float a[300],sum,avg,b;
int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a,a+n);
    avg = (sum - a[0] - a[n-1])/(n-2);
    if (avg - a[1] > a[n-2] - avg){
        b = avg - a[1];
    }else{
        b = a[n-2] - avg;
    }
    printf("%.2f %.2f",avg,b);
}
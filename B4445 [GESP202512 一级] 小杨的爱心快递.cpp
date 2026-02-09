/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    double V,G,M,N,a,b;
    cin >> V >> G >> M >> N;
    a = 0.5 * V;
    if (G < 300){
        b = M;
    }else {
        b = N;
    }
    if (a < b){
        printf("%.1f\n",a);
    }else {
        printf("%.1f\n",b);
    }
    return 0;
}
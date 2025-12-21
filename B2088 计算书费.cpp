/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
float a[10] = {28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
int main(){
    float sum = 0;
    for (int i = 0; i < 10; i++){
        int b;
        cin >> b;
        sum += a[i] * b;
    }
    printf("%.1f",sum);
}
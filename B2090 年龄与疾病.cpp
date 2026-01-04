/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int N,age[100],a=0,b=0,c=0,d=0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> age[i];
    }
    for (int i = 0; i < N; i++) {
        if (age[i] <= 18) {
            a++;
        } else if (age[i] >= 19 && age[i] <= 35) {
            b++;
        } else if (age[i] >= 36 && age[i] <= 60) {
            c++;
        } else {
            d++;
        }
    }
    printf("%.2f%%\n",(float)a/N*100);
    printf("%.2f%%\n",(float)b/N*100);
    printf("%.2f%%\n",(float)c/N*100);
    printf("%.2f%%\n",(float)d/N*100);
    return 0;
}
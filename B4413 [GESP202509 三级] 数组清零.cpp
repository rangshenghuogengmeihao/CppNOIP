/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int a[101];
int main(){
    int n,count = 0;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    while(true){
      int max_index = 0,min_index = 0,max1 = 0,min1 = 100;
      for (int i=0;i<n;i++){
        if (a[i]>max1){
            max1 = a[i];
            max_index = i;
        }
        if (a[i]!=0&&a[i]<min1){
            min1 = a[i];
            min_index = i;
        }
      }
      bool flag = true;
      for (int i=0;i<n;i++){
        if (a[i]!=0){
            flag = false;
            break;
        }
      }
      if(flag){
        break;
      }
      a[max_index] -= min1;
      count++;
    }
    cout<<count;
    return 0;
}
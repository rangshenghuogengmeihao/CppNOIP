/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int b[200003];
int c[200003];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n;i++){
        int a;
        cin>>a;
        if(b[a]==0){ // 第一次出现  
            b[a]=i;
        }
        else{ // 第二次出现  
            c[b[a]]=i; // 第二次出现的数的下标
            c[i]=b[a];
        }
    }
    for(int i=1;i<=2*n;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}
/*
#include<iostream>
using namespace std;
int a[100001];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=2*n;i++){
        for(int j=1;j<=2*n;j++){
            // printf("%d %d\n",a[i],a[j]);
            if(a[i]==a[j] && i!=j){
                cout<<j<<" ";
                break;
            }   
        }
        
    }
    return 0;
}
*/
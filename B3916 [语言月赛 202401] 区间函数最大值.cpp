/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    long long a,b,c,d,e,f,g,p,x1,x2,y1,y2,max=0;
    cin>>a>>b>>c>>d>>e>>f>>g>>p>>x1>>x2>>y1>>y2;
    for(int x=x1;x<=x2;x++){
        for(int y=y1;y<=y2;y++){
            int s=(a*x*x*x+b*y*y*y+c*x*x*y+d*x*y*y+e*x*y+f*x+g*y)%p;
            if(s>max) max=s;
        }
    }
    cout<<max;
    return 0;
}
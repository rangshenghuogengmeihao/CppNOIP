/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include <iostream>
using namespace std;
int main(){
    double x,y,n,p,ans1=0,ans2=0;
    cin >> x >> y >> n >> p;
    ans2 = p*n/10;
    if(p >= x)
        ans1 = p-y;
    else
        ans1 = p;
    if(ans1 >= ans2)
        printf("%.2f\n",ans2);
    else
        printf("%.2f\n",ans1);
    return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
// 	int x,y,n,p;
// 	float a1,a2;
// 	cin >> x >> y >> n >> p;
// 	if (p-x>=0){
// 		a1=p-y;
// 	}else{
// 		a1=p;
// 	}
// 	a2 = float(p*n)/10;
// 	if (a1<a2){
// 		printf("%.2f",a1);
// 	}else{
// 		printf("%.2f",a2);
// 	}
// 	return 0;
// }
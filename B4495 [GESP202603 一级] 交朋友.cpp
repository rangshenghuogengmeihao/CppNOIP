/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
	int h1,h2,h3,h4,a,b,c;
	cin >> h1 >> h2 >> h3 >> h4;
	if (h2>h1){a=h2-h1;}else{a=h1-h2;} //a=abs(h1-h2);
	if (h3>h1){b=h3-h1;}else{b=h1-h3;} //b=abs(h1-h3);
	if (h4>h1){c=h4-h1;}else{c=h1-h4;} //c=abs(h1-h4);
	int height=h2;
	int min=a;
	if (min > b){height=h3;min=b;}
	else if(min == b){
		if(height>h3){height=h3;}
	}
	if (min > c){height=h4;min=c;}
	else if(min == c){
		if(height>h4){height=h4;}
	}
	cout << height;	
    return 0;
}
/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        bool flag = false;
        for (int i=2;i+1<s.length()&&!flag;i++){
            string a = s.substr(0,i);
            string b = s.substr(i);
            //判断回文数
            bool flag1 = true;
            for (int j=0;j<a.length()/2;j++){
                if (a[j]!=a[a.length()-j-1]){
                    flag1 = false;
                    break;
                }
            }
            bool flag2 = true;
            for (int j=0;j<b.length()/2;j++){
                if (b[j]!=b[b.length()-j-1]){
                    flag2 = false;
                    break;
                }
            }
            if (flag1&&flag2){
                cout << "Yes" << endl;
                // cout << "a=" << a;
                // cout << "b=" << b;
                flag = true;
                break;
            }
        }if (flag == false) {
            cout << "No" << endl;
        }
    }
    return 0;
}
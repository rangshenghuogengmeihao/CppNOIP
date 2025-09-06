/*
  @author:拾光 <rangshenghuogengmeihao@github.com>
*/
#include<iostream>
using namespace std;
bool leap(int year){
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        return true;
    }
    else {
        return false;
    }
}
int days(int year,int month){
    if (month == 2){
        if (leap(year)){
            return 29;
        }else{
            return 28;
        }
    }else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        return 31;
    }else
        return 30;
}
int main(){
    int y,m,d,h,k;
    cin >> y >> m >> d >> h >> k;
    d += (h+k)/24;
    h = (h+k) % 24;
    while (true){
        int day = days(y,m);
        if (d <= day)
            break;
        d -= day;
        m += 1;
        if (m > 12){
            m = 1;
            y += 1;
        }
    }
    cout << y << " " << m << " " << d << " " << h;
}
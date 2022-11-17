#include <iostream>
using namespace std;

int main(){
    int daysInMonth[] = {
        31,
        28,
        31,
        30,
        31,
        30,
        31,
        31,
        30,
        31,
        30,
        31
    };
    int month , year;
    cout <<"Enter month (1-12): "; cin >> month;
    cout <<"Enter year:" ; cin >> year;


    bool isLeapYear =   false;
    if ((year %4 ==0 && year % 100 != 0 ) || ( year % 400 == 0)){
        isLeapYear = true;
    }

    int getMonthLastDay = daysInMonth[month - 1] + (isLeapYear && month == 2 ? 1:0);
    cout << getMonthLastDay <<" day"<<endl ;
}
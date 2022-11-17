#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n = -1 ;
    while ( n <= 0){
        cout <<"Enter US Dolar need convert:" ;
        cin >> n;
        if( n <= 0 ) cout <<"Again! ";
    }
    int a ;
    cout <<"Enter US Dolar convert to \n"<<"1. Euro\n"<<"2. Janpan Yen\n"<<"3. British Pound. \n"<<"4. Vietnamese Dong\n";
    cout <<fixed << setprecision(7);       
            
            
    cin >> a;
    switch (a){
        case 1:
            cout <<"Euro: " << n*1.02 << " Euro";
            break;
        case 2:
            cout <<"Janpan Yen: "<< n*147.56 <<" Yen";
            break;
        case 3:
            cout<< "British Pound: "<< n*.88 << " Pound";
            break;
        case 4:
            cout<< "Vietnamese Dong: "<< n*24865 <<" Dong";
            break;
    }
    cout << "End!"<<endl;

}
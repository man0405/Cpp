#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int setw7 = 7, setw10 = 10;
    int x = 18, y = 2;
    cout<< setw(setw7)<< left <<"Gtri x";
    cout<< setw(setw7)<< left <<"Gtri y";
    cout<< setw(setw10)<< left <<"Bieu thuc";
    cout<< "Ket Qua" <<endl;

    cout<< setw(setw7)<< left <<"18|";
    cout<< setw(setw7)<< left << "2|";
    cout<< setw(setw10)<< left <<"A=y+3";
    cout<<"|A=" << y+3 <<endl;

    cout<< setw(setw7)<< left <<"18|";
    cout<< setw(setw7)<< left << "2|";
    cout<< setw(setw10)<< left <<"B=y-2";
    cout<<"|A=" << y-2 <<endl;

    cout<< setw(setw7)<< left <<"18|";
    cout<< setw(setw7)<< left << "2|";
    cout<< setw(setw10)<< left <<"C=y*5";
    cout<<"|A=" << y*5 <<endl;

    cout<< setw(setw7)<< left <<"18|";
    cout<< setw(setw7)<< left << "2|";
    cout<< setw(setw10)<< left <<"D=x/y";
    cout<<"|A=" << x/y <<endl;

    cout<< setw(setw7)<< left <<"18|";
    cout<< setw(setw7)<< left << "2|";
    cout<< setw(setw10)<< left <<"E=x%y";
    cout<<"|A=" << x%y <<endl;

    printf("%d|" , x);
    printf("%5d|" , y);
    printf("%10s", "E=x%y");
    printf("%8s%d\n" , "|E=", x%y);
}
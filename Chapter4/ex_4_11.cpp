#include <iostream>
using namespace std;

int main (){
    int a , b , c;
    cin >> a >> b >> c;
    int sum = a+b+c;
    if ( a < 0 || b < 0 || c < 0 || sum < 2*a || sum < 2*b || sum < 2*c ) {
        cout << "Not triangle";
    } 

    if ( a ==b && b == c){
        cout <<"E"<<endl;

    }else if (a==b || b==c || c ==a )   
    {
        cout <<"I"<<endl;
    } else cout <<"S";

    return 0;
    
}

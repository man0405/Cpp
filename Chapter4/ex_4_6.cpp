#include  <iostream>
#include <math.h>
using namespace std;

int main() {
    double a , b,c , delta, x1, x2;
    cout << "Enter a b c of quadratic equation: ";
    cin >> a >> b >> c;
    if (a == 0) {
        if ( b == 0 ){
            if ( c ==0) cout <<"an infinite number of roots \n";
            else cout <<"a negative number of roots \n";
        } else {
            x1 = x2 = -c/b;
            cout << "Roots of the quadratic equation are:" << x1 <<endl;
        }
    } else {
        delta = b*b-4*a*c;
        if (delta > 0 ){
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            cout << "Roots of the quadratic equation are:" << x1 <<"and" << x2 <<endl;
        } else if ( delta == 0 ) {
            x1 = x2 = -b / (2*a);
            cout <<" Roots of the quadratic equation are:" << x1 <<endl;
        } else if ( delta < 0) {
            cout<<"a negative number of roots\n";
        }
    }

}
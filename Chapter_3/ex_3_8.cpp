#include <iostream>  
#include<math.h>  
using namespace std; 

int main(){
    double degrees = 0;
    double angleRadians = degrees * 3.14159265358979323846/ 180;
    cout <<"Sine = " << sin(angleRadians) <<endl;
    cout <<"Cosine = " << cos(angleRadians) <<endl;
    cout <<"Tangent = " << tan(angleRadians) <<endl;
    cout<<"Cotangent = " << 1/tan(angleRadians) <<endl;
}
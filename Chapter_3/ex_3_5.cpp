#include <iostream>
using namespace std;

int main(){
    int v , v0 , a, t;
    cout << "Enter Initial velocity : " ;
    cin >> v0;
    cout << "Enter Acceleration : " ;
    cin >> a;
    cout << "Enter Time : " ;
    cin >> t;
    v = v0 + a*t;
    cout << "Final Velocity : " << v << endl;
    return 0;
}
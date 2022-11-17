#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)  swap (a,b);
    if ( a > c ) swap (a,c);
    if ( b > c ) swap (b,c);

    const int LIM = 1e9;
    if ( a <= - LIM || c >= LIM) cout <<"Not valid" << endl;
    else cout << a << " " << b << " "   << c << endl;
    return 0;
}
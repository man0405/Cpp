#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int p, s,q;
    p = x*y;
    s=x+y;
    q = s*s +p*(s*x)*(p+y);
    cout<<p<<endl;
    cout<<s<<endl;
    cout<<q<<endl;

    return 0;
}
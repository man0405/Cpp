#include <iostream>
using namespace std;

int main(){
    int a, b,c;
    cout << "Three angles of a triangle:" << endl;
    cin>>a>>b>>c;
    if (a + b + c == 180){
        cout<< "The triangle is vaild";
    } else cout<< "The triangle is not vaild"<< endl;

    return 0;

}

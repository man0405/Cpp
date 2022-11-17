#include <iostream>
using namespace std;

int main(){
    string s;
    cout<< "Enter your String :" ;
    getline(cin, s);
    cout<< "String length: "<< s.length() <<endl;
    return 0;
}
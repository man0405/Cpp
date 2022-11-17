#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int soDau = n / 10;
    int soCuoi = n % 10;

    cout << "total: " << soDau + soCuoi<<endl;
}
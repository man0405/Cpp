#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int tich = 1;

    while (n > 0)
    {
        tich *= (n % 10);
        n /= 10;
    }
    cout << tich << endl;
    return 0;
}
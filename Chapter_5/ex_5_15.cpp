#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "The largest odd number divisor :" << n << endl;
    }
    else
    {
        for (int i = n; i > 0; i--)
        {
            if (n % i == 0 && i % 2 != 0)
            {
                cout << "The largest odd number divisor :" << i << endl;
                return 0;
            }
        }
        cout << "N" << endl;
    }
}
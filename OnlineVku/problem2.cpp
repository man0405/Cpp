#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "N";
    }
    else
    {
        for (int i = n; i > 0; i--)
        {
            if (n % i == 0)
            {
                if (i % 2 != 0)
                {
                    cout << i;
                    break;
                }
            }
        }
    }
}
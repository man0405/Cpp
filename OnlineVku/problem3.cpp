#include <iostream>
using namespace std;

int test(int n)
{
    if (n == 1)
        return 1;
    else
        return n + test(n - 1);
}

int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        for (int i = n; i > 0; i--)
        {
            if (test(i) <= n)
            {
                cout << i;
                break;
            }
        }
    }
    else
    {
        cout << "N";
    }
}
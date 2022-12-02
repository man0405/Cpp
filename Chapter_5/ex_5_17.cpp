#include <iostream>
using namespace std;

int main()
{
    int n;
    while (true)
    {
        cin >> n;
        if (n > 0)
        {
            break;
        }
        else
        {
            cout << "N" << endl;
        }
    }
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += i;
        if (sum >= n)
        {
            cout << i - 1;
            break;
        }
    }

    return 0;
}
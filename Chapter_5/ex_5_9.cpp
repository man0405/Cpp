#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        int count = 0;
        int sum = 0;
        int b = i;
        int a = 0;
        while (b > 0)
        {
            b /= 10;
            count++;
        }
        b = i;
        while (b > 0)
        {
            a = b % 10;
            sum = sum + pow(a, count);
            b /= 10;
        }
        if (i == sum)
        {
            cout << i << " ";
        }
    }
    return 0;
}
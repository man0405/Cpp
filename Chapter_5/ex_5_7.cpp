#include <iostream>
using namespace std;

int caculator(int n)
{
    if (n == 0)
        return 0;
    else
        return ((n % 2 == 0) ? (n + caculator(n - 1)) : caculator(n - 1));
}

int main()
{
    int n;
    cin >> n;
    cout << caculator(n);
}
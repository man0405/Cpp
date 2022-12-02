#include <iostream>
using namespace std;

int caculator(int n)
{
    if (n == 1)
        return 1;
    else
        return n * n + caculator(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << caculator(n) << endl;
    return 0;
}
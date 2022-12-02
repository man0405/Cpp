#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int b = n;
    while (b > 0)
    {
        sum = (sum * 10 + (b % 10));
        b = b / 10;
    }
    if (sum == n)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string result;

    string arrays[] = {"zero ", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine "};

    while (n > 0)
    {
        result = arrays[n % 10] + result;
        n = n / 10;
    }

    cout << result << endl;
}
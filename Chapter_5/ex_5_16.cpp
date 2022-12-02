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
            cout << "Again, enter number greater than zero" << endl;
        }
    }
    string result = "";
    while (n > 0)
    {
        int a = n % 10;
        if (a % 2 != 0)
        {
            result = to_string(a) + result;
        }
        n = n / 10;
    }
    cout << result << endl;
    return 0;
}
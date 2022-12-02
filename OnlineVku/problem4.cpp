#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 50)
    {
        return 0;
    }
    else
    {
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << array[i] << " ";
        }

        cout << endl;

        int max = array[0];
        for (int i = 0; i < n; i++)
        {
            if (array[i] > max)
            {
                max = array[i];
            }
        }
        cout << max << endl;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (array[i] == max)
            {
                count++;
            }
        }
        cout << count;
    }
}
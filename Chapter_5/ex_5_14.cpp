#include <iostream>
#include <cmath>
using namespace std;

void armstrong()
{
    int m, n;
    cout << "Enter m and n :";
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
}

void prime()
{
    int n;
    cout << "Enter number to check prime";
    cin >> n;
    if (n < 2)
    {
        cout << "Not prime" << endl;
    }
    else if (n == 2)
    {
        cout << "Prime" << endl;
    }
    else
    {
        if (n % 2 == 0)
        {
            cout << "Not prime" << endl;
        }
        else
        {
            for (int i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    cout << "Not prime" << endl;
                    return;
                }
            }
            cout << "Prime" << endl;
        }
    }
}

void choice()
{
    int chocie;
    cout << "Choice (1,2,3): ";
    cin >> chocie;
    switch (chocie)
    {
    case 1:
        armstrong();
        break;
    case 2:
        prime();
        break;
    case 3:
        cout << "Do you want to finish: (c/k) ";
        char ch;
        cin >> ch;
        if (ch == 'c')
        {
            cout << "Bye!!" << endl;
            return;
        }
        else if (ch == 'k')
        {
            choice();
        }
    }
}

int main()
{
    cout << "**********************" << endl;
    cout << "*       Menu         *" << endl;
    cout << "*  1. Armstrong      *" << endl;
    cout << "*  2. Prime          *" << endl;
    cout << "*  3. Finish         *" << endl;
    cout << "**********************" << endl;
    cout << endl;

    choice();
}
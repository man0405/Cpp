#include <iostream>
using namespace std;

bool isCheckSpace(char c)
{
    return c == ' ';
}

int main()
{
    string fullName;
    getline(cin, fullName);
    if (fullName.length() > 20)
    {
        cout << "N";
    }
    else
    {
        for (int i = 0; i < fullName.length(); i++)
        {
            if (fullName[i] != ' ')
            {
                cout << fullName[i];
            }
        }
        cout << "@vku.udn.vn";
    }
}
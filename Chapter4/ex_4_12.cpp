#include <iostream>
using namespace std;
int main()
{

    char check;
    cout << "Enter : " ;
    cin>>check;
    if(((check>='A')&&(check<='Z'))||((check>='a')&&(check<='z'))) cout<<"A"  <<endl;
    else if((check>='0')&&(check<='9')) cout<<"D" <<endl;
    else cout<<"S" <<endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int l1,l2,w1,w2;
    cout << "The length and width of the rectangle 1 :" ;
    cin >> l1 >> w1;

    cout << "The length and width of the rectangle 2 :" ;
    cin >> l2 >> w2;

    if ((l1*w1) == (l2*w2)) cout<< "The area of the rectangles are the same\n";
    else if ((l1*w1) < (l2*w2)) cout << "The area of the rectangles 1 greater than the rectangle 2\n";
    else if ((l1*w1) > (l2*w2)) cout << " The area of the rectangles 2  greater than the rectangle 1\n";

    return   0;

}
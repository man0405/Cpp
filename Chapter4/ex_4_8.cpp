#include <iostream>
using namespace std;

int main(){
    double quiz, mid_term , final_score;
    cout <<" Enter quiz: ";
    cin >> quiz;
    cout <<"Enter mid-term: ";
    cin >> mid_term;
    cout <<"Enter final score: ";
    cin >> final_score;

    double GPA = .2*quiz + .3*mid_term + .5*final_score;
    cout << "GPA: " << GPA << endl;
    if (GPA >= 8.5) cout <<"Gread A";
    else if (GPA >= 7.0) cout <<"Gread B";
    else if (GPA >= 5.5) cout <<"Gread C";
    else if (GPA >= 4.0) cout <<"Gread D";
    else cout <<"Gread F";


}
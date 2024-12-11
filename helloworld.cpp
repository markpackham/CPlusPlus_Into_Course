#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char grade = 'C'    ;

    switch (grade)
    {
    case 'A':
        cout << "You did great";
        break;

    case 'B':
        cout << "You did ok";
        break;

    case 'C':
        cout << "You passed";
        break;

    case 'D':
        cout << "You failed";
        break;

    default:
        cout << "Something went wrong";
        break;
    }

    return 0;
}
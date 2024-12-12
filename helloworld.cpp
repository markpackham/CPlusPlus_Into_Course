#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

double square(double length);

int main()
{

    double length = 5.0;
    double area = square(length);

    cout << "Area: " << area << endl;

    return 0;
}

double square(double length)
{
    return length * length;
}
#include <iostream>

using namespace std;

class Car
{
public:
    string make;
    string model;
    int year;
    string color;

    // Constructor (like most other langues it has the same name as the class)
    Car(string make, string model, int year, string color)
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main()
{

    Car car1("Chevy", "Corvette", 2022, "blue");
    Car car2("Ford", "Mustang", 2023, "red");

    cout << car1.make << '\n';
    cout << car1.model << '\n';
    cout << car1.year << '\n';
    cout << car1.color << '\n';

    return 0;
}
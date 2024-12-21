#include <iostream>
using namespace std;

struct Car
{
    string model;
    int year;
    string color;
};

void printCar(Car car);

void printCarByRef(Car &car);

void paintCarByRef(Car &car, string color);

int main()
{

    Car car1;
    car1.model = "Mustang";
    car1.year = 2022;
    car1.color = "Red";

    Car car2;
    car2.model = "Corvette";
    car2.year = 2021;
    car2.color = "Blue";

    // Show address of cars
    cout << "Car 1 address:" << &car1 << endl;
    cout << "Car 2 address:" << &car2 << endl;
    printCarByRef(car1);
    printCarByRef(car2);

    cout << endl;

    cout << "Print cars by value rather than reference" << endl;
    printCar(car1);
    printCar(car2);

    cout << endl;

    paintCarByRef(car1, "Blood Angel Red");
    paintCarByRef(car2, "Goblin Green");

    return 0;
}

void printCar(Car car)
{
    cout << car.model << " " << car.year << " " << car.color << endl;
    cout << "Car Memory Address: " << &car << endl;
}

void printCarByRef(Car &car)
{
    cout << car.model << " " << car.year << " " << car.color << endl;
    cout << "Car Memory Address: " << &car << endl;
}

// You need to do this by reference or the color would never get changed
void paintCarByRef(Car &car, string color)
{
    car.color = color;
    printCarByRef(car);
}
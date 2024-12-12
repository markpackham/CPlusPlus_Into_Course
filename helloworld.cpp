#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);

int myNum = 333;

void printNum();

int main()
{

    string cars[] = {"Mustang", "Corvette", "Camaro", "Popemobile"};

    cars[0] = "Batmobile";

    cout << cars[0] << endl;
    cout << cars[1] << endl;

    return 0;
}

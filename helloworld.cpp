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

    string name1 = "John";
    string name2 = "JohnJohnJohnJohnJohnJohnJohnJohnJohnJohnJohnJohnJohnJohnJohnJohnJohnJohn";
    double gpa = 2.5;

    cout << sizeof(name1) << " bytes" << endl;
    cout << sizeof(name2) << " bytes" << endl;
    cout << sizeof(gpa) << " bytes" << endl;

    return 0;
}

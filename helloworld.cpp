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

    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    string names[] = {"Bob", "Jane", "Jim", "Sue"};

    cout << sizeof(name1) << " bytes" << endl;
    cout << sizeof(name2) << " bytes" << endl;
    cout << sizeof(gpa) << " bytes" << endl;
    // How to find out the number of elements in an array of type char
    cout << sizeof(grades)/sizeof(char) << " elements in the array of chars" << endl;
    cout << sizeof(names)/sizeof(string) << " elements in the array of strings" << endl;

    return 0;
}

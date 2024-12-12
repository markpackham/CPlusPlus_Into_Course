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

    int myNum = -1000;
    printNum();
    // :: scope resolution operator so uses myNum = 333;
    cout << ::myNum << endl;

    return 0;
}

void printNum(){
    int myNum = 2;
    cout << myNum << endl;
}
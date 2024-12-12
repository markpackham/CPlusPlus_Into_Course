#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

void bakePizza();
void bakePizza(string topping1);

int main()
{

    bakePizza();
    bakePizza("ham");

    return 0;
}

void bakePizza()
{
    cout << "Here is your pizza!\n";
}

void bakePizza(string topping1)
{
    cout << "Here is your " << topping1 << " pizza!\n";
}
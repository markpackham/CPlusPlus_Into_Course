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

 string students[] = {"Bob","John","Frank","Sandy"};

// For Each :
for(string student : students){
    cout << student << endl;
}
    return 0;
}

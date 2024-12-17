#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 99;
    string foods[99];
    // int size = sizeof(foods) / sizeof(foods[0]);

    // Fill 1st 1/3 elements with "pizza"
    // We provide the begin point and the end point then finally the value
    fill(foods, foods + (SIZE / 3), "pizza");
    // Fill second third with "hamburgers"
    fill(foods + (SIZE / 3), foods + (SIZE / 3) * 2, "hamburgers");
    // Fill final third with "hotdogs"
    fill(foods + (SIZE / 3) * 2, foods + SIZE,  "hotdogs");

    for (string food : foods)
    {
        cout << food << " \n";
    }

    return 0;
}

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

double getTotal(double prices[], int size);

int main()
{

    double prices[] = {4.99, 5.99, 6.99, 7.99};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);

    cout << "Total: $" << total << endl;
    return 0;
}

double getTotal(double prices[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
}
#include <iostream>
using namespace std;

int main()
{
    string cars[][3] = {{"Mustang", "Escape", "F-150"}, {"Corvette", "Equinox", "Silverado"}, {"Challenger", "Durango", "Ram 1500"}, {"Batmobile", "Popemobile", "Automobile"}};

    int rows = sizeof(cars) / sizeof(cars[0]);
    int cols = sizeof(cars[0]) / sizeof(cars[0][0]);

    // Outer loop deals with rows
    for (int i = 0; i < rows; i++)
    {
        // Inner loop deals with columns
        for (int j = 0; j < cols; j++)
        {
            cout << cars[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

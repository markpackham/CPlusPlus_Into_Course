#include <iostream>
using namespace std;

int main()
{
    // Array that user will populate later
    string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);
    // To hold user input so "q" for quit not mistaken as food
    string temp;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
        getline(cin, temp);
        // Make sure the "q" to quit isn't mistaken for a food
        if (temp == "q")
        {
            break;
        }
        else
        {
            foods[i] = temp;
        }
    }

    cout << "Your favorite foods are: \n\n";

    for (string food : foods)
    {
        cout << food << endl;
    }

    return 0;
}

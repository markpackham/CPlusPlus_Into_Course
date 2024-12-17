#include <iostream>
using namespace std;

int main()
{
    // Array that user will populate later
    string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a food you like or 'q' to quit #" << i+1 << ": ";
        getline(cin, foods[i]);
        if(foods[i] == "q"){
            break;
        }
    }

    cout << "Your favorite foods are: \n\n";

    for(string food : foods){
        cout << food << endl;
    }

    return 0;
}

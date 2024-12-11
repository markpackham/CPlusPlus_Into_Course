#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    if (name.length() > 100)
    {
        cout << "Your name can't be over 100 chars";
    }
    else if (name.empty()){
        cout << "You cannot have an empty name";
    }
    else
    {
        cout << "Welcome " << name;
    }

    return 0;
}
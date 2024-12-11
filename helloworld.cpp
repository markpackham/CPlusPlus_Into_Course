#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string name;

    cout << "Enter your name: ";
    name.clear();
    getline(cin, name);

    name.insert(0, "@");

    cout << name.find(' ');

    cout << "\n";

    cout << name.erase(0,2);

    return 0;
}
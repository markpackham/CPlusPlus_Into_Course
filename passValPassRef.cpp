#include <iostream>
using namespace std;

// Pass by value won't work, the copies won't change anything
// void swap(string x, string y);

void swap(string &x, string &y);

int main()
{

    string x = "Kool-Aid";
    string y = "Water";

    swap(x, y);

    cout << "X: " << x << " - X: address " << &x << endl;
    cout << "Y: " << y << " - Y: address " << &y << endl;

    return 0;
}

// Pass by value (so no &, no change occurs in main())
// void swap(string x, string y)
// {
//     string temp;

//     temp = x;
//     x = y;
//     y = temp;
// }

// Pass by Reference
void swap(string &x, string &y)
{
    string temp;

    temp = x;
    x = y;
    y = temp;
}
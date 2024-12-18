#include <iostream>
using namespace std;

int main()
{

    // pointers = variable that stores a memory address of another variable
    // cause sometimes we just want to work with an address

    // & address-of operator
    // * dereference operator

    string name = "Bob";
    string *namePtr = &name;

    // Show "Bob" when pointer is dereferenced
    cout << *namePtr;

    return 0;
}

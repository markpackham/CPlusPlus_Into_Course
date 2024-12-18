#include <iostream>
using namespace std;

int main()
{

    // pointers = variable that stores a memory address of another variable
    // cause sometimes we just want to work with an address

    // & address-of operator
    // * dereference operator

    string name = "Bob";
    int age = 20;
    string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    string *namePtr = &name;
    int *agePtr = &age;
    // Since the array is already an address we don't need to use &
    // so don't do &freePizzas
    string *freePizzasPtr = freePizzas;    

    // Show "Bob" when pointer is dereferenced
    cout << *namePtr << endl;
    cout << *agePtr << endl;
    // Gives first element in array
    cout << *freePizzasPtr << endl;

    return 0;
}

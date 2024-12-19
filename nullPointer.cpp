#include <iostream>
using namespace std;

int main()
{

     // Null pointers hold a null value
     // they are handy to determine is an address was successfully assigned to a pointer

     // nullptr is a keyword that represents a null pointer literal
     // it's handy to make a null pointer the default until you are sure
     // what to assign a pointer to
     int *pointer = nullptr;
     int x = 123;

     // DEREFERENCING A NULL POINTER will lead to undefined behavior
     // DO NOT DO IT!!!!

     pointer = &x;

     // Make sure the pointer is not null
     // handy when dealing with dynamic memory
     if (pointer == nullptr)
     {
          std::cout << "address was not assigned!\n";
     }
     else
     {
          std::cout << "address was assigned!\n";
          std::cout << *pointer;
     }

     return 0;
}
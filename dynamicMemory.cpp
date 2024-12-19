#include <iostream>

int main()
{

    // Dyanmic memory = Memory is alocated after the program is compiled & running
    // Use the 'new' operator to allocate memory in the heap rather than tha stack

    // Handy when we don't know how much memory we need
    // Great for user input given how unpredictable user input is
    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    // new allows us to use the heap rather than the stack
    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << " ";
    }

// Free up memory in the heap
// avoid memory leak, always use "delete" if you're using "new"
    delete[] pGrades;

    return 0;
}
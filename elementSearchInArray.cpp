#include <iostream>
using namespace std;

// Search for element in an array
int searchArray(int array[], int size, int element);

int main()
{

    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int myNum;

    cout << "Enter a number between 1 and 5: ";
    cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (index == -1)
    {
        cout << "Number not found" << endl;
    }
    else
    {
        cout << myNum << " is at index " << index << endl;
    }
}

int searchArray(int array[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }

    // If we can't find it return the -1 error code
    return -1;
}

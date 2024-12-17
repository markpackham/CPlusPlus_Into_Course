#include <iostream>
using namespace std;

void sort(int array[], int size);
void sortDescending(int array[], int size);

int main()
{
    int array[] = {1, 2, 3, 4, 5, 10, 9, 8, 7, 6};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    for (int element : array)
    {
        cout << element << " ";
    }

    cout << endl;

    sortDescending(array, size);

    for (int element : array)
    {
        cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size)
{

    int temp;
    // We don't need to bother with the last element so we
    // size - 1
    for (int i = 0; i < size - 1; i++)
    {

        for (int j = 0; j < size - i - 1; j++)
        {
            // See if element on left greater than element on right
            // then swap
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void sortDescending(int array[], int size)
{

    int temp;
    // We don't need to bother with the last element so we
    // size - 1
    for (int i = 0; i < size - 1; i++)
    {

        for (int j = 0; j < size - i - 1; j++)
        {
            // Do the opposite to the ascending bubble sort
            // the > is now a < so the order is reversed
            if (array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
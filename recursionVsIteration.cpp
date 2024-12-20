#include <iostream>

using namespace std;

void walkIterative(int steps);
void walkRecursive(int steps);

int factorialIterative(int num);
int factorialRecursive(int num);

int main()
{
    // Recursion, a technique where a function invokes itself from within
    // to break a complex problem into repeatable steps

    // Iterative Vs Recursive
    // Recursion can lead to cleaner & less code, great for sorting & search algorithms
    // However recursive code uses more memory & can be slower/processing time as well as harder to debug

    cout << "Iterative Walk" << endl;
    walkIterative(5);
    cout << endl;
    cout << "Recursive Walk" << endl;
    walkRecursive(5);

    cout << endl;
    cout << "Iterative Factoral" << endl;
    // Returns 120
    cout << factorialIterative(5);
    cout << endl;
    cout << "Recursive Factoral" << endl;
    // Returns 120
    cout << factorialRecursive(5);
    cout << endl;

    return 0;
}

void walkIterative(int steps)
{
    for (int i = 0; i < steps; i++)
    {
        cout << "You take a step!\n";
    }
}

void walkRecursive(int steps)
{
    if (steps > 0)
    {
        cout << "You take a step!\n";
        walkRecursive(steps - 1);
    }
}

int factorialIterative(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

int factorialRecursive(int num)
{
    if (num > 1)
    {
        return num * factorialRecursive(num - 1);
    }
    else
    {
        return 1;
    }
}
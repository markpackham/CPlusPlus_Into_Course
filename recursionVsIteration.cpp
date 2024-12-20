#include <iostream>

using namespace std;

void walkIterative(int steps);
void walkRecursive(int steps);

int main()
{
    // Recursion, a technique where a function invokes itself from within
    // to break a complex problem into repeatable steps

    // Iterative Vs Recursive
    // Recursion can lead to cleaner & less code, great for sorting & search algorithms
    // However recursive code uses more memory & can be slower/processing time as well as harder to debug

    cout << "Iterative" << endl;
    walkIterative(5);
    cout << endl;
    cout << "Recursive" << endl;
    walkRecursive(5);

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
#include <iostream>
using namespace std;
template <typename T>

// We can use templates instead of overloading function
// otherwise we'd have to do 1 for ints, doubles, chars etc
T maxTemplate(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{

    // Function templates = describe what a function looks like
    // can be used to generate as many overloaded functions
    // as needed each using different data types / Generics

    cout << maxTemplate(1, 2) << endl;
    cout << maxTemplate(1.1, 2.2) << endl;
    cout << maxTemplate('1', '2') << endl;

    return 0;
}


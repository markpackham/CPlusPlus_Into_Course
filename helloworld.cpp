#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    srand(time(NULL));

    int dice = (rand() % 6) + 1;

    cout << dice << endl;

    return 0;
}
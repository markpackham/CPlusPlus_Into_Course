#include <iostream>
#include <vector>

// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main()
{
    text_t firstName = "Bob";
    number_t age = 27;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}
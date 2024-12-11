#include <iostream>
#include <vector>

int main()
{
    std:: string name;
    int age;

    std::cout << "How old are you?: ";
    std::cin >> age;

    std::cout << "What is your name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}
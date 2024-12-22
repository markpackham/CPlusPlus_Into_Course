#include <iostream>

class Pizza
{
public:
    std::string topping1 = "change me";
    std::string topping2 = "no topping";

    // Default constructor if we pass no arguments
    Pizza()
    {
        // Demo overloading global variable
        this->topping1 = "no topping";
    }

    Pizza(std::string topping1)
    {
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main()
{

    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms", "peppers");
    Pizza pizza3;

    std::cout << pizza1.topping1 << std::endl;
    std::cout << pizza2.topping1 << std::endl;
    std::cout << pizza2.topping2 << std::endl;
    std::cout << pizza3.topping1 << std::endl;
    std::cout << pizza3.topping2 << std::endl;

    return 0;
}
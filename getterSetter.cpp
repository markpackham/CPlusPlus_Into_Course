#include <iostream>

class Stove
{

    // Can only access via the getter or setter
private:
    int temperature = 0;

public:
    int getTemperature()
    {
        return temperature;
    }

    // Restrict the temperatures the user is allowed to use
    // via the setter, it's good practice to put them in the Constructor
    void setTemperature(int temperature)
    {
        if (temperature < 0)
        {
            this->temperature = 0;
        }
        // Forbid a temperature higher than 10 degrees
        else if (temperature >= 10)
        {
            this->temperature = 10;
        }
        else
        {
            this->temperature = temperature;
        }
    }
};

int main()
{

    Stove stove;

    stove.setTemperature(5);

    std::cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}
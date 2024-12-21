#include <iostream>

enum Day
{
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};

// If you don't assign a number then it's done implicitly
// as 0, 1, 2, 3
enum Flavor
{
    vanilla,
    chocolate,
    strawberry,
    mint
};

// You can also assign values like the atomic weights
enum ElementAtomicWeight
{
    lead = 207,
    gold = 196,
    silver = 107
};

int main()
{

    /*
    An enum is a special type that represents a group of constants (unchangeable values).

    To create an enum, use the enum keyword, followed by the name of the enum, and separate the enum items with a comma:
    */

    Day today = friday;

    switch (today)
    {
    case sunday:
        std::cout << "It is the Lord's Day!\n";
        break;
    case monday:
        std::cout << "It is Monday!\n";
        break;
    case tuesday:
        std::cout << "It is Tuesday!\n";
        break;
    case wednesday:
        std::cout << "It is Wednesday!\n";
        break;
    case thursday:
        std::cout << "It is Thorsday!\n";
        break;
    case friday:
        std::cout << "It is Rebecca Black Day!\n";
        break;
    case saturday:
        std::cout << "It is Saturday!\n";
        break;
    }

    return 0;
}
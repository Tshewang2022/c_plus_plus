#include <iostream>
using namespace std;
//  virutal function/methods in c++.
// class Days
// {
// public:
//     virtual void attendence()
//     {
//         cout << "You have attended this many part of the program" << endl;
//     }
// };
// class Day : Days
// {
//     string week;
//     string month;
//     void attendence()
//     {
//         cout << "How many days have you attended the coding challenges" << endl;
//     }
// };
// int main()
// {
//     Days *li = new Days();
//     li->attendence();
//     // Abstraction-> the way of hiding the complex part from the another programmer
//     // cout << "Today is the day two of my challenges, to push my boundries" << endl;
//     return 0;
// }

// example of the pure virtual function
class Instrument
{
public:
    // pure virutal function
    virtual void makeSound() = 0;
};
class Accordian : public Instrument
{
    void makeSound()
    {
        std::cout << "The accordian is playin on the street" << endl;
    }
};
int main()
{
    Instrument *li = new Accordian();
    li->makeSound();
    return 0;
}
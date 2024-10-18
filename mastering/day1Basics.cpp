#include <iostream>
using namespace std;
// follow the DRY method always
/* oops concept in the c++, encapsulation, abstraction , inheritance , and polymorphism*/

class Pen
{
public:
    string Name;
    string Model;
    Pen(string name, string model)
    {
        Name = name;
        Model = model;
    }
    void describe()
    {
        cout << "The name of the pen is " << Name << "and model is " << Model << endl;
    }

    //  the constructor will be default
};
int main()
{
    // the ballPoint is repeating, should be removed and optimized the code
    Pen ballPoint("CelloGripper", "2016");
    // ballPoint.name = " CelloGripper";
    // ballPoint.model = "2016";
    ballPoint.describe();
    return 0;
}
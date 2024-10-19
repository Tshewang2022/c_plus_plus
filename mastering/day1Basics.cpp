#include <iostream>
using namespace std;
// follow the DRY method always
/* oops concept in the c++, encapsulation, abstraction , inheritance , and polymorphism*/

// class Pen
// {
// public:
//     string Name;
//     string Model;
//  constructor
//     Pen(string name, string model)
//     {
//         Name = name;
//         Model = model;
//     }
//     void describe()
//     {
//         cout << "The name of the pen is " << Name << "and model is " << Model << endl;
//     }

// };
// int main()
// {
//     // the ballPoint is repeating, should be removed and optimized the code
//     Pen ballPoint("CelloGripper", "2016");
//     // ballPoint.name = " CelloGripper";
//     // ballPoint.model = "2016";
//     ballPoint.describe();
//     return 0;
// }

// ENCAPSULATION, making the class private
class Pen
{
private:
    string Model;

protected:
    string Name;

public:
    Pen(string name, string model)
    {
        Name = name;
        Model = model;
    }

public:
    void setName(string name)
    {
        name = Name;
    }
    string getName()
    {
        return Name;
    }
    void setModel(string model)
    {
        Model = model;
    }
    string getModel()
    {
        return Model;
    }

    void describe()
    {
        cout << "The name of the pen is " << Name << "and model is " << Model << endl;
    }
};
int main()
{
    // the ballPoint is repeating, should be removed and optimized the code
    Pen ballPoint("CelloGripper", "2016");
    cout << "The name of the person is " << ballPoint.getName() << endl;
    ballPoint.setModel("2090");
    cout << "The model of the pen is " << ballPoint.getModel() << endl;
    // ballPoint.name = " CelloGripper";
    // ballPoint.model = "2016";
    ballPoint.describe();
    return 0;
}

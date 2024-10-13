#include <iostream>
#include <string> // Include this header for std::string

class Employee
{
public:
    // Member variables
    std::string name;
    int position;
    std::string company;

    // Constructor
    Employee(std::string Name, int Position, std::string Company) // Use std::string here
    {
        name = Name;
        position = Position;
        company = Company;
    }

    // Method to introduce the employee
    void introduce()
    {
        std::cout << "The name of the person is " << name << std::endl;
        std::cout << "The position is " << position << std::endl;
        std::cout << "The company is " << company << std::endl;
    }
};

int main()
{
    // Using the constructor to initialize the object
    Employee staff1 = Employee("tshewang", 1, "technerds");
    staff1.introduce();

    return 0;
}
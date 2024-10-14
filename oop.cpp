#include <iostream>
#include <string> // Include this header for std::string
// abstraction concept, hiding the complex part of the class, and creating the instance of class with abstract class
class abstractEmployee
{
    virtual void askPromotion() = 0;
};
class Employee : abstractEmployee
{
    // if we encapsulate the properties of this class using the private modifier, then we should set getters and setters function
private:
    // Member variables

    int position;
    std::string company;

protected:
    std::string name;

public:
    void setName(std::string Name)
    {
        name = Name;
    };
    std::string getName()
    {
        return name;
    };
    void setPosition(int Position)
    {
        position = Position;
    };
    int getPosition()
    {
        return position;
    };
    void setCompany(std::string Company)
    {
        company = Company;
    };
    std::string getCompany()
    {
        return company;
    };
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
    void askPromotion()
    {
        if (position < 1)
        {
            std::cout << "you have been promoted" << name << std::endl;
        }
        else
        {
            std::cout << "sorry no promotion for you" << name << std::endl;
        }
    }
};

// inheritance, the concept of having the inheriting the properties from the parent class is called as inheritance
class Developer : Employee
{
public:
    std::string favProgrammingLanguages;

    // the constructor too will get inherited from the parent
    Developer(std::string name, int position, std::string company, std::string FavProgramming) : Employee(name, position, company)
    {
        favProgrammingLanguages = FavProgramming;
    }
    void favOne()
    {
        std::cout << "this is " << name << " and i like " << favProgrammingLanguages << std::endl;
    }
};
int main()
{
    // Using the constructor to initialize the object
    // Employee staff1 = Employee("tshewang", 1, "technerds");
    Developer staff3 = Developer("tshewang", 1, "tech_nerds", "c++");
    staff3.favOne();
    // staff1.introduce();
    // staff1.setPosition(2);
    // staff1.askPromotion();
    // std::cout << "The name of the person is " << staff1.getName() << " the position is " << staff1.getPosition() << std::endl;

    return 0;
}
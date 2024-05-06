using std::string;
// class Employees
// {
//     // attributes
// private:
//     int Age;
//     int Height;
//     string Name;
//     string Company;

//     // setting the setters and getters, to access the private class
// public:
//     void setAge(int age)
//     {
//         if (age >= 18)
//             // setter
//             age = Age;
//     };
//     int getAge()
//     {
//         // getter
//         return Age;
//     }
//     void setHeight(int height)
//     {
//         height = Height;
//     };
//     int getHeight()
//     {
//         return Height;
//     };

//     void setName(string name)
//     {
//         name = Name;
//     }
//     string getName()
//     {
//         return Name;
//     }

//     void setCompany(string company)
//     {
//         company = Company;
//     }
//     string getCompany()
//     {
//         return Company;
//     }

//     // methods-> that will describe the objects
// public:
//     void yourdetails()
//     {
//         std::cout << Age << '\n';
//         std::cout << Height << '\n';
//         std::cout << Name << '\n';
//         std::cout << Company << '\n';
//     };
//     // defining the constructors
// public:
//     Employees(int age, int height, string name, string company)
//     {
//         Age = age;
//         Height = height;
//         Name = name;
//         Company = company;
//     };
// };
// int main()
// {
//     // defining the objects, employee1 is the object that is classfied under the class "Employees";
//     Employees employee1 = Employees(23, 34, "Tshewang", "Amazon");
//     // employee1.age = 24;
//     // employee1.height = 24;
//     // employee1.name = "tshewang";  // employee1.age = 24;
//     // employee1.height = 24;
//     // employee1.name = "tshewang";
//     // employee1.company = "Google";
//     // employee1.company = "Google";
//     // how to refactor this code, we can do that by using the constructors
//     employee1.yourdetails();
//     employee1.setAge(15);
//     employee1.setCompany("google");
//     employee1.setHeight(23);
//     std::cout << employee1.getName() << "is " << employee1.getHeight() << "cm \n";
//     std::cout
//         << employee1.getName() << " is " << employee1.getAge() << "years old \n";
//     std::cout << employee1.getName() << "is employee at " << employee1.getCompany();

//     return 0;
// }

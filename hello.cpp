#include <iostream>
#include <vector>
namespace first
{
    int x = 2;
}

namespace second
{
    int x = 3;
}

// main functions
int main()

{

    // === datatypes in c++
    /*
    1. integer= int(which will store only the whole number)
    2. double= holds both the int and decimal numbers(float in js and python)
    3. character = char(which will store only the single string)
    4. string = string(which all store list of characters)
    5. boolean = (true or false)


    // declaring the variables in c++
    const keywords are being used to declared constants that does not change the value, using the const keyword we need to upppercase the variable
    rest of the variables we can declare using the random characters

    */
    int y = 4;
    int age = 26;
    const int AGE = 26;
    std::string abmitions = "Billionaire";
    double millionaire = 27.5;
    bool billionaire = true;
    char grade = 'A';
    // std::cout << first::x;
    std::cout << "first::x = " << first::x << std::endl;
    std::cout << "second::x = " << second::x << std::endl;

    /*
    namespace = it is used to avoid the conflicts between the same variable name
    EX>> x=4, and x=3, will give errors in c++ because, it has same variable name, so to avoid this we have namespace
    */

    // alias
    /*
    typedef = used to create additional name(alias or nickname) for the another data type, helps readability and typepos
    using = will works same as the typedef keywords

    */
    // typedef std::vector<std::pair<std::string, int>> pairlist_t;

    // === ARITHMETIC OPERATORS
    /*
    works similar to js program operators
    */

    // data type conversions (implicit(done automatically), explicit(done manually))
    // int correct = (double)90;

    /* how to accept the user input using c++
    cout << (insertion operator)
    cin >> (extraction operator)
    */

   /*
   
   */

    typedef std::string text_t;
    using word_t = std::string;

    text_t firstname = "tshewang";
    word_t lastname = "gyaltshen";
    std::cout << firstname << '\n';
    std::cout << lastname << '\n';
    int age1;

    std::string name;
    std::cout << "what's your name";
    std::cin >> name;
    std::getline(std::cin, name);
    std::cout << "what's your age";
    std::cin >> age1;
    std::cout << "Hello" << name;
    std::cout << "You are " << age1 << "old";
    return 0;
}

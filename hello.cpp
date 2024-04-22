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
    // std::cout << first::x;=
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
    statement
    if statment= the code will get excuted only if its true
    swtich = alternatives for using the "else if"; syntax remain same like the javascript
    */

    // typedef std::string text_t;
    // using word_t = std::string;

    // text_t firstname = "tshewang";
    // word_t lastname = "gyaltshen";
    // std::cout << firstname << '\n';
    // std::cout << lastname << '\n';
    // int age1;
    // int age2;

    // std::string name;
    // std::cout << "what's your name";
    // std::cin >> name;
    // std::getline(std::cin, name);
    // std::cout << "what's your age";
    // std::cin >> age1;
    // std::cout << "Hello" << name;
    // std::cout << "You are " << age1 << "old";
    // std::cout << "what's your age";
    // std::cin >> age2;
    // if (age2 >= 18)
    // {
    //     std::cout << "welcome to the site";
    // }
    // else
    // {
    //     std::cout << "you are not old enough to get into this site";
    // }

    // creating the calculator using the swtich statement

    // char calcutate;
    // double num1;
    // double num2;
    // double result;

    // std::cout << "*********** calulator ************";
    // std::cout << "Enter any (* / + -)";
    // std::cin >> calcutate;

    // std::cout << "Enter #1";
    // std::cin >> num1;

    // std::cout << "Enter #2";
    // std::cin >> num2;

    // switch (calcutate)
    // {
    // case '+':
    //     result = num1 + num2;
    //     std::cout << "result is: " << result << '\n';
    //     break;
    // case '-':
    //     result = num1 - num2;
    //     std::cout << "result is: " << result << '\n';
    //     break;

    // case '/':
    //     result = num1 / num2;
    //     std::cout << "result is: " << result << '\n';
    //     break;

    // default:
    //     std::cout << "that wasnt a valid response";
    //     break;
    // }

    // std::cout << "**********************************";

    /*
    ternary operator ?: = replacement to the if/else statement
    condition ? expression 1 : expression 2;

    */

    // conventional if/else statement works
    // double grade1 = 65;

    // if (grade1 >= 60)
    // {
    //     std::cout << "you pass";
    // }
    // else
    // {
    //     std::cout << "you failed";
    // }

    // ternary operators

    // (grade1 >= 60) ? std::cout << "you pass" : std::cout << "you failed";

    /*
    logical operators

    && AND operators ->(both conditions need to be true)
    || OR operators ->(even one condition true will be okay)
    ! NOT operators, all the logic will remain same as like javascript ->(will reverse the conditions)
    */
    int temp;
    std::cout << "Enter the temperature";
    std::cin >> temp;

    if (temp > 0 && temp < 30)
    {
        std::cout << "the temperature is good";
    }
    else
    {
        std::cout << "the temperature if bad";
    }

    if (temp <= 0 || temp >= 30)
    {
        std::cout << "the temperatur is bad";
    }
    else
    {
        std::cout << "the temperatutre is good";
    }

    return 0;
}

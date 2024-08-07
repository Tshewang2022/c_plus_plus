#include <iostream>
#include <vector>
#include <ctime>
// namespace first
// {
//     int x = 2;
// }

// namespace second
// {
//     int x = 3;
// }

// void functionName()
// {
//     std::cout << "Happy birthday to you";
// }

// double square(double height)
// {
//     return height * height;
// }

// // main functions
// int main()

// {
// functionName();

// === datatypes in c++
/*
1. integer= int(which will store only the whole number)
2. double= holds both the int and decimal numbers(float in js and python)
3. character = char(which will store only the single string)
4. string = string(which all store list of characters)
5. boolean = (true or false)
6. arrays = should falls under the data types, but i am not sure of it

// declaring the variables in c++
const keywords are being used to declared constants that does not change the value, using the const keyword we need to upppercase the variable
rest of the variables we can declare using the random characters

*/
// double height = 6.5;
// double area = square(height);
// std::cout << "Area" << area << std::endl;
// int y = 4;
// int age = 26;
// const int AGE = 26;
// std::string abmitions = "Billionaire";
// double millionaire = 27.5;
// bool billionaire = true;
// char grade = 'A';
// // std::cout << first::x;=
// std::cout << "first::x = " << first::x << std::endl;
// std::cout << "second::x = " << second::x << std::endl;

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
// int temp;
// std::cout << "Enter the temperature";
// std::cin >> temp;

// if (temp > 0 && temp < 30)
// {
//     std::cout << "the temperature is good";
// }
// else
// {
//     std::cout << "the temperature if bad";
// }

// if (temp <= 0 || temp >= 30)
// {
//     std::cout << "the temperatur is bad";
// }
// else
// {
//     std::cout << "the temperatutre is good";
// }

// functions in c++. declaring
/*
void functionName(){
    std::cout << "This is the function in c++", it is accessible to only within scope
}

return = return a value back to the spot when you called the encompassing function

function in c++ and variable is similar, except c++ has (){}.
*/

/*
calculating the area of the square

area of the square is = y * y = y**2

*/

// lets create a function to calculate that height

/*
overloaded functions: the function with the same name but must have different parameters, that is called as overload function


void overload(){
    std::cout << "This is the first function without any parameter";
}

void overload(std::string topping1, std::string topping2); -> this is called the function declarations
void overload(std::string topping1, std::string topping2){
    std::cout << "Here is your" << topping1 << "and" << topping2 << endl;
}

overload("pepper", "mushroom")-> this should be called inside int main(){}; this will function arguments
*/

/*
variable scope
1. local variable, the variable declared inside the function or the block
2. global variables, the variable that is declared outside of all function is called global
*/

//     return 0;
// }

/*
lets see how my leg will get blown off, if i write my programe in c++

// */
// char enter;
// void showBalance(double balance);
// double withdrawl(double balance);
// double deposit();

// int main()
// {
//     double balance = 0;
//     int choice = 0;
//     do
//     {
//         std::cout << "******welcome to the bank*****\n";
//         std::cout << "Enter your choice: \n";
//         std::cout << "1. Show Balance\n";
//         std::cout << "2. Deposit Money\n";
//         std::cout << "3. Withdraw Money\n";
//         std::cout << "4. Exit\n";
//         std::cin >> choice;
//         std::cin.clear();
//         fflush(stdin);

//         switch (choice)
//         {
//         case 1:
//             showBalance(balance);
//             break;

//         case 2:
//             balance += deposit();
//             showBalance(balance);
//             break;

//         case 3:
//             balance -= withdrawl(balance);
//             showBalance(balance);

//         case 4:
//             std::cout << "Thanks for visiting us \n44";

//         default:
//             std::cout << "Invalid choice\n";
//         }

//     } while (choice != 4);
// }

// /*
// functions

// */
// void showBalance(double balance)
// {
//     std::cout << "Your balance is : $" << balance << '\n';
// };

// double deposit()
// {
//     double amount = 0;
//     std::cout << "Enter amout to be deposited: \n";
//     std::cin >> amount;
//     return amount;
//     if (amount > 0)
//     {
//         std::cout << "That's not a valid amount: \n";
//         return 0;
//     }
// };

// double withdrawl(double balance)
// {
//     double amount = 0;
//     std::cout << "Enter the amount to be withdrawn: \n";
//     std::cin >> amount;
//     if (amount > balance)
//     {
//         std::cout << "Insufficient fund, please make deposite before withdrawling the account";
//     }
//     else if (amount < 0)
//     {
//         std::cout << "that is not a valid amount \n";
//         return 0;
//     }
//     else
//     {
//         return amount;
//     }
//     return 0;
// };

// concept of the game
/*
there will be two players, one computer and another one will be player 1

there should be a function that makes both players interact with each other
1. function play (player and computer)
2. function that gives choice for the both the users, (players will have, rock, paper and scissors) && computers too
3. function that will decide who is the winner of the game( computer or player)
3.  conditions that loops over another players, deciding which is winner, so best would be the switch statements
*/

// data init
// char player;
// char computer;
// void choice( char rock, char paper, char scissors);

// *** rocker, paper, scissors game ****
// char getPlayerChoice();
// char getComputerChoice();
// void showChoice(char choice); // rock || paper || scissors
// void Winner(char player, char computer);

// int main()
// {
//     char player;
//     char computer;

//     player = getPlayerChoice();
//     std::cout << "your choice is: ";
//     showChoice(player);

//     computer = getComputerChoice();
//     std::cout << "Computer choice: ";
//     showChoice(computer);
//     Winner(player, computer);
//     // std::cout << "The winner of the game will get to learn 12 hours free c++ programing course !\n";
//     return 0;
// };

// char getPlayerChoice()
// {
//     // should wrap the code inside the do{}while(){} loop, so to prevent enter other user value
//     char player;
//     do
//     {
//         std::cout << "Choose one of the followings";
//         std::cout << "Rock-paper-scissors game\n";
//         std::cout << "'r' for rock\n";
//         std::cout << "'p' for paper\n";
//         std::cout << "'s' for scissors\n";
//         std::cin >> player;
//         // std::cout << player;
//     } while (player != 'r' && player != 'p' && player != 's');
//     return player;
// };

// char getComputerChoice()
// {
//     srand(time(0));
//     int num = rand() % 3 + 1;

//     switch (num)
//     {
//     case 1:
//         return 'r';
//         break;
//     case 2:
//         return 'p';
//         break;
//     case 3:
//         return 's';
//         break;

//     default:
//         break;
//     }
//     return 0;
// };

// void showChoice(char choice)
// {
//     switch (choice)
//     {
//     case 'r':
//         std::cout << "Rock\n";
//         break;
//     case 'p':
//         std::cout << "Paper\n";
//         break;
//     case 's':
//         std::cout << "Scissors\n";
//         break;
//         // default:
//         //     std::cout << "";
//         break;
//     }
// };

// void Winner(char player, char computer)
// {
//     switch (player)
//     {
//     case 'r':
//         if (computer == 'r')
//         {
//             std::cout << "its a tie !\n";
//         }
//         else if (computer == 'p')
//         {
//             std::cout << "You lose\n";
//         }
//         else
//         {
//             std::cout << "You have win the game, congrats\n";
//         }

//     case 's':
//         if (computer == 's')
//         {
//             std::cout << "its a tie !\n";
//         }
//         else if (computer == 'r')
//         {
//             std::cout << "You lose\n";
//         }
//         else
//         {
//             std::cout << "You have win the game, congrats\n";
//         }

//     case 'p':
//         if (computer == 'p')
//         {
//             std::cout << "its a tie !\n";
//         }
//         else if (computer == 'r')
//         {
//             std::cout << "You lose\n";
//         }
//         else
//         {
//             std::cout << "You have win the game, congrats\n";
//         }
//         /* code */
//         break;

//     default:
//         break;
//     }
// };

// *** arrays in c++, arrays is a variable that can hold lots of value with single variable ***
// int main()
// {
//     std::string cars[] = {"volvo", "bmw", "ducati", "ktm"};
//     std::cout << cars[0] << '\n';

//     // sizeof() = use to determine the size of bytes of, variables, datatypes, class, objects, etc;
//     /*
//     1 bytes = 8 bits ( units for storing the information in computer system)

//     */
//     // *** method to iterate over the arrays, or loop over the arrays in c+++ ***
//     std::string students[] = {"tshewang", "gyaltshen", "nima"};
/*
we are going the use the for() loop to iterate over the arrays in c++
but what if need to make changes, such as remove or add into the exsiting arrays. But the for() iterates ovver only fix numbers
so, in this case we need to use the sizeof() in c++, in js where we use length method.
*/

//     for (int i = 0; i < sizeof(students) / sizeof(std::string); i++)
//     {
//         std::cout << students[i] << '\n';
//     }

//     // double grade = 1;
//     // std::cout << sizeof(double) << "  bytes\n";

//     /*
//     how to pass the arrays to the functions

//     */
// }
// double getTotal(double prices[], int size)
// {
//     double total = 0;

//     for (int i = 0; i < size; i++)
//     {
//         total += prices[i];
//     }
//     return total;
// }

// // when passing the arrays inside the function(This is related to the function declarations), you dont need to pass the array, you have to just pass the array name;
// // however when the function recieves the array as the parameters, it decays into the POINTER.
// int main()
// {
//     double prices[] = {1, 2, 3, 4, 5};
//     int size = sizeof(prices) / sizeof(double);
//     double total = getTotal(prices, size);
//     std::cout << "total: " << total << '\n';
//     return 0;
// }

// today whole day, i havent touched the code. feeling bit drained out today
// yeah i am back on the same day, feeling motivated to learn more and do more things.
/*
*** LESSSONS OF THE DAY****
The most important things that you need to remember before learning anything
1. ATTENSION, giving 100% attention to anything that you do. Put off the notifications for all the device. This will help you in registrations
2. Comprehension: Understanding what you are doing, and how that works. This will help in retension.
3. Applicatons-> so many people learn so many skills, but they do no apply. Thats why, do no recall much.
All the steps needs to be on your finger tips, so practice everyday.
*/

/*
Searching elements inside the arrays
*/
//  This is the linear search
// int searchArray(int array[], int size, int element)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (array[i] == element)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int size = sizeof(numbers) / sizeof(numbers[0]);
//     int index;
//     int myNum;

//     std::cout << "Enter element to search for: \n";
//     std::cin >> myNum;
//     index = searchArray(numbers, size, myNum);
//     if (index != -1)
//     {
//         std::cout << myNum << " is at index " << index << '\n';
//     }
//     else
//     {
//         std::cout << "The number that you have enter is not in the arrays\n";
//     }
//     return 0;
// }

/*
How to sort the array
Types of sorting in c++
1. Bubble sort = if(index[0] > index[1])class man
{
    // defining the attributes, or the model of the class
    int age;
    std::string name;

    // defining the methods of the class

public:
    void output()
    {
        std::cout << 'he is' << age;
        // std::cout << name << 'is from tashigang';
    }
} int main()
{
    man apple;
    apple.output();
}{
    std::cout << "index[0] of the array will move to index[1], by swaping the position";
}else{
    std::cout << "The position of the array will remain same, untill all the arrays are in orders";
}
*/
// coding the buddle sort array
// the function sort the array
// void sort(int array[], int size)
// {
//     int temp; // creating the temporary variable to store the value
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - i - 1; j++)
//         {
//             if (array[j] > array[j + 1])
//             {

//                 temp = array[j];
//                 array[j] = array[j + 1];
//                 array[j + 1] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int array[] = {10, 1, 6, 4, 52, 9, 0, 4, 2};
//     int size = sizeof(array) / sizeof(array[0]);
//     sort(array, size);

//     for (int element : array)
//     {
//         std::cout << element << " ";
//     }
//     return 0;
// }

// how to accept the user input inside the array
// int main()
// {
//     std::string foods[5];
//     int size = sizeof(foods) / sizeof(foods[0]);
//     for (int i = 1; i < size; i++)
//     {
//         std::cout << "Enter a food you like : #" << i << ": ";
//         std::getline(std::cin, foods[i]);
//     }
//     std::cout << "You like the following foods: \n";

//     for (std::string food : foods)
//     {
//         std::cout << food << '\n';
//     }
//     return 0;
// }

/*
will be creating the quiz question game using the c++ languages
*/

// int main()
// {
//     std::cout << "Welcome to the quiz questions";
//     std::string questions[] = {'1. what year was c++ created?: '},
//                 {"2. who invented c+++?: "},
//                 {"3. what is the predecessor of c++?: "},
//                 {"4.Is the Earth Flat?: "}

//                 std::string options[][4] = {{"a. 1969", "b.1975", "c. 1985", "d. 1999"}, {'a.guido van Rossan', "b. Bjarne Stroustrup", "c.Jhon Cenna", "d. Thomas Eddison"}, {'a. yes', "b. no", "c. sometimes", "d. what's earth?"}};
//     char answersKey[] = { "c",
//                           "b",
//                           "c",
//                           "a" }

//     return 0;
// }
// memory address = location where the data has been stored is called as the memory address and can be access with the &operators, all will be in the hexa-decimal

// int main()
// {
//     std::string name = "tshewang";
//     std::cout << &name << '\n';
//     return 0;
// }
/*
c++ Functions contains four parts
1. return type (int)
2.  functionName(main)
3. functionParameter()
4. function body

when are using namespace defined by the c++, we should be using the std:: which means standard, example, std::string, that means we using the we are using the string that is
defined in c++ libaries

standard libary has 4 input and output objects(IO)
1. for output, ostream, which is "cout" ( which means character out-> output)
2. for input, istream, which is "cin" (which means input-> input)
3. for error, which is "cerr",(which means error)
4. for history, which is "clog", (which will show all the history)
*/

/*
oop concepts in c++
object, class, methods and constructors(does not have return types, have same name like class, public)
*/
// using std::string;class man
// {
//     // defining the attributes, or the model of the class
//     int age;
//     std::string name;

//     // defining the methods of the class

// public:
//     void output()
//     {
//         std::cout << 'he is' << age;
//         // std::cout << name << 'is from tashigang';
//     }
// }
// int main()
// {
//     man apple;
//     apple.output();
// }

// this will act as the model for the employee, and by defualt the class are in private, so you cannot access from the object
// class Employee
// {
//     // this are called the attributes
//     // private:
//     // the methods are being defined class
// public:
//     /*
//     There are four main concepts in oop
//     1. incapsulations-> hiding the properties of the class (data) from the others and setting them to methods by setting them as the setter and getters functions
//     2. abstractions-> hiding the complex things from the user, and only displaying the simple things
//     3. inheritance-> just like a genetics in biology
//     4. polymorphism->
//     */
// private:
//     string Name;
//     string Company;
//     int Age;

//     void IntroduceYourself()
//     {
//         std::cout << "Name is " << Name << '\n';
//         std::cout << "Age is " << Age << '\n';
//         std::cout << "Company is " << Company << '\n';
//     };
//     // this is the constructors, and will init the newly created objects, the default constructors does not have value
//     Employee(string name, string company, int age)
//     {
//         Name = name;
//         Company = company;
//         Age = age;
//     }
// };
// class man
// {
//     class man
//     {
//         // defining the attributes, or the model of the class
//         int age;
//         std::string name;

//         // defining the methods of the class
//         class man
//         {
//             // defining the attributes, or the model of the class
//             int age;
//             class man
//             {
//                 // defining the attributes, or the model of the class
//                 int age;
//                 std::string name;

//                 // defining the methods of the class

//             public:
//                 void output()
//                 {
//                     std::cout << 'he is' << age;
//                     // std::cout << name << 'is from tashigang';
//                 }
//             } int main()
//             {
//                 man apple;
//                 apple.output();
//             }
//             std::string name;

//             // defining the methods of the class

//         public:
//             void output()
//             {
//                 std::cout << 'he is' << age;
//                 // std::cout << name << 'is from tashigang';
//             }
//         } int main()
//         {
//             man apple;
//             apple.output();
//         }

//     public:
//         void output()
//         {
//             std::cout << 'he is' << age;
//             // std::cout << name << 'is from tashigang';
//         }
//     } int main()
//     {
//         man apple;
//         apple.output();
//     }
//     // defining the attributes, or the model of the class
//     int age;
//     std::string name;

//     // defining the methods of the class

// public:
//     void output()
//     {
//         std::cout << 'he is' << age;
//         // std::cout << name << 'is from tashigang';
//     }
// } int main()
// {
//     man apple;
//     apple.output();
// }
// // creating the object of the class employee
// int main()
// {

//     Employee employee1 = Employee("tshewang", "Google", 26);
//     // employee1.name = "tshewang";
//     // employee1.company = "google";
//     // employee1.age = 25;
//     employee1.IntroduceYourself();
// }

// int main()
// {
// std:
//     int age = 26;
//     if (age >= 18)
//     {
//         std::cout << "Your are adult now" << '\n';
//     }
//     return 0;
// }

// ternary opertors to replace the if...else conditions

// int main()
// {
//     int age = 10;
//     string result;
//     result = (age >= 18) ? "Your are an adult(this will excute if it is true)" : "You are not a adult(this will excute if only its false)";
//     std::cout << result << '\n';
//     return 0;
// }

/*
Declaring the class, objects in the programing languages
class-> it is the user-defined data, which will act as the model for individual objects
objects-> it will have the data field for which will have attributes and propperties of the particular objects
attributes->object has the data stored inside attributes( the properties that particular objects has)
methods-> it is the function that descript the objects.
*/

// declaring the class and objects
// using std::string;
// class Employees
// {
//     // attributes
// public:
//     int age;
//     int height;
//     string name;
//     string company;

//     // methods-> that will describe the objects
//     int yourdetails()
//     {
//         std::cout << age << '\n';
//         std::cout << height << '\n';
//         std::cout << name << '\n';
//         std::cout << company << '\n';
//     };
//     // defining the constructors
//     Employees(int Age, int Height, string Name, string Company)
//     {
//         age = Age;
//         height = Height;
//         name = Name;
//         company = Company;
//     };
// };
// int main()
// {
//     // defining the objects, employee1 is the object that is classfied under the class "Employees";
//     Employees employee1(23, 34, "Tshewang", "Amazon");
//     // employee1.age = 24;
//     // employee1.height = 24;
//     // employee1.name = "tshewang";
//     // employee1.company = "Google";
//     // how to refactor this code, we can do that by using the constructors
//     employee1.yourdetails();
//     return 0;
// }

// day2 of mastering the OOPs concepts in c++
/*
Programming-> based on the object manipulation rather than the functions and logics are called as the oops concepts
which the objects are being classified into, objects and class
objects is the subset of the class, where class is known as the user defined datatypes

the class will have methods-> it is the function that describe the objects
objects-> it is the data field

Below function is the main concepts
1. class
2. methods
3. objects
4. constructors-> will reduce the code duplications, and wil initialized the newly created object

*/
// using std::string;
// class fruits
// {
//     // this are the user-defined datas
// public:
//     string Color;
//     string Taste;
//     int Size;

//     void result()
//     {
//         std::cout << Color << '\n';
//         std::cout << Taste << '\n';
//         std::cout << Size << '\n';
//         // return 0;
//     }
//     // the constructor will have the same name as the class
// public:
//     fruits(string color, string taste, int size)
//     {
//         Color = color;
//         Taste = taste;
//         Size = size;
//     };
// };
// int main()
// {
//     // should be defining the objects
//     fruits apple("red", "sour", 12);
//     // apple.Color = "red";
//     // apple.Size = 12;
//     // apple.Taste = "sour";
//     apple.result();
//     // now we need method, to called this objects, so the methods should be defined inside the class.
//     return 0;
// }
// this how to constructors , class and objects works in oops concepts;

// mastering the four main pillars of oops concepts
/*
1. abstractions-> this will make another developer easy to work with our code, because, complex part will be hidden
2. inheritance -> will reduce the code duplications where, the new class will inheritate properties fromm the parent class
3. polymorphism -> wil will reduce the code duplicationsl group the variables and function of the simlar kind to one group so that we can bundle them to reduce the code
4. incapsulations->some parts of the data will be hidden, will the third party  cannot modify it. maybe for the security reason
*/

// INCAPSULATIONS-> hiding the user defined data and making it private scope is called the incapsulation, can be done using the setter and getter functions
// using std::string;
// class cars
// {
//     // first process of incapsulation is making the class private
// public:
//     string Name;
//     string Brand;
//     int Numbers;

//     // second method is setting the setter and getter function for private class to access

//     // this is the setter function
//     void setName(string name)
//     {
//         Name = name;
//     }

//     // this is the getter function
//     void getName()
//     {
//         return Name;
//     };

//     void setBrand(string brand)
//     {
//         Brand = brand;
//     };
//     void getBrand()
//     {
//         return Brand;
//     };

//     void setNumbers(int num1)
//     {
//         Numbers = num1;
//     };
//     void getNumbers()
//     {
//         return Numbers;
//     };

//     // methods
//     void output()
//     {
//         std::cout << Name << '\n';
//         std::cout << Brand << '\n';
//         std::cout << Numbers << '\n';
//     };
//     cars(string name, string brand, int numbers){
//         name = Name,
//         brand = Brand,
//         numbers = Numbers,
//     };
// };

// // creating the objects of class cars

// int main()
// {
//     cars bmw = bmw("bmw", "ducati", 2);
//     // bmw.Name = "bmw-299";
//     // bmw.Brand = "bmw";
//     // bmw.Numbers = 100;
//     bmw.output();
//     bmw.setName("ducati");
//     std::cout << bmw.getName() << " is " << bmw.getName() << " ";
// };

// incapsulation
// using std::string;
// setting abstract class
// class AbstractEmployee
// {
//     virtual void AskForPromotion() = 0;
// };

// inheriting the class employees to Developer class

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

//     // void AskForPromotion()
//     // {

//     //     // we will be writing the program inside this one to excute the functions
//     //     if (Age > 30)

//     //         std::cout << Name << " You got promoted! \n";

//     //     else

//     //         std::cout << Name << " Sorry no promotion for you! \n";
//     // };
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
// class Developer : Employees
// {
// public:
//     string FavProgrammingLanguage;

//     // defining constructors
//     Developer(int age, int height, string name, string company, string favProgrammingLanguage)
//         : Employees(name, company, age)
//     {
//         FavProgrammingLanguage = favProgrammingLanguage;
//     };

//     // this is the methods
//     void Fixbug()
//     {
//         std::cout << getName() << "fixed bug using " << FavProgrammingLanguage << std::endl;
//     }
// };
// int main()
// {
//     // defining the objects, employee1 is the object that is classfied under the class "Employees";
//     // Employees employee1 = Employees(23, 34, "Tshewang", "Amazon");

//     // defining objects
//     Developer sangay = Developer(23, 34, "tshewang", "amazon", "c++");
//     sangay.Fixbug();
//     // employee1.age = 24;
// employee1.height = 24;
// employee1.name = "tshewang";  // employee1.age = 24;
// employee1.height = 24;
// employee1.name = "tshewang";
// employee1.company = "Google";
// employee1.company = "Google";
// how to refactor this code, we can do that by using the constructors
// employee1.yourdetails();
// employee1.setAge(15);
// employee1.setCompany("google");
// employee1.setHeight(23);
// std::cout << employee1.getName() << "is " << employee1.getHeight() << "cm \n";
// std::cout << employee1.getName() << " is " << employee1.getAge() << "years old \n";
// std::cout << employee1.getName() << "is employee at " << employee1.getCompany() << "\n";
// employee1.AskForPromotion();

//     return 0;
// }

// abstractions-> means hiding the complex things in the background where only the simple part is being shown
// this the begining of new coding era.
// declaring the class
// using std::string;

// // creating the abstract class for maintaining the code reuseability
// class AbstractClassFruits
// {
//     virtual void AskForPromotions() = 0;
// };

// class Fruits : AbstractClassFruits
// {
//     // defining the user-datas inside the class
// private:
//     string Color;
//     string Name;
//     int Size;

//     // methods( it is the functions that will describe objects)
// public:
//     void fruitsdetials()
//     {
//         std::cout << Name << "\n";
//         std::cout << Color << "\n";
//         std::cout << Size << "\n";
//     };
//     void AskForPromotions()
//     {
//         // this will be the abstract class && setting the conditions for the envoking thaat functions
//         if ()
//         {
//             // code to be excuted
//         }
//     }
//     // constructors
// public:
//     Fruits(string name, string color, int size)
//     {
//         Name = name;
//         Color = color;
//         Size = size;
//     }
//     // setter and getters
// };

// int main()
// {
//     // defining the objects inside the main functions
//     Fruits groundFruits = Fruits("pineapple", "green", 23);
//     groundFruits.fruitsdetials();
// };

// inheritance-> inheriting the class from the parent class, will contain the same attributes and behaviour from the parent class
// will reduce the code duplications

/* INHERITANCE->*/
// here we will be taking about the inheritance

// class Cars
// {
// private:
//     // defining the attributes
//     std::string Brand;

// protected:
//     std::string Name;

//     // defining the methods
// public:
//     void output()
//     {
//         std::cout << "Your care is " << Name << std::endl;
//         std::cout << Brand << " is your Car brand \n";
//     }

// public:
//     // defining the constructor to access your private class
//     Cars(string name, string brand)
//     {
//         Name = name;
//         Brand = brand;
//     }
// };

// will be defining the inheritance here
// class ElectricCar : Cars

// { // defining the attributes of the electric cars
// public:
//     string YourFavCars;

//     // defining the constructors
// public:
//     ElectricCar(string name, string brand, string yourfavcars)
//         : Cars(name, brand)
//     {
//         YourFavCars = yourfavcars;
//     }
//     // defining the methods for the e-car

//     void eCars()
//     {
//         // this e-car will have the class that will be inherited from the parent class of Cars.
//         std::cout << Name << " fixed bug using " << YourFavCars << std::endl;
//     }
// };

// defining the object of class Cars
// int main()
// {
//     // Cars volvo = Cars("Volvo-20", "bwm");
//     // volvo.output();

//     ElectricCar volvo = ElectricCar("bmw", "ducati", "v4ductati");
//     volvo.eCars();
// }

// the fourth principles of oops concepts is polymorphism-> which will group similar class and objects under one value. that is called as the polymorphism

/*
class
object
methods
constructor -> for now lets keep as the default
*/
#include <iostream>
#include <vector>
#include <ctime>
class man
{
public:
    // defining the attributes, or the model of the class
    int age;
    std::string name;

    // defining the methods of the class
public:
    void output(int age, string name)
    {
        std::cout << 'he is' << age;
        std::cout << name << 'is from tashigang';
    }
};
int main()
{
    man apple;
    apple.output(12, 'tshewang');
    return 0;
}

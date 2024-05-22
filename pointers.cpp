#include <iostream>
#include <vector>
#include <ctime>
// // pointer in c++
// int main()
// {
//     int a;  // assiging variables
//     int *p; // this is the pointer variable
//     p = &a; // assigining the variable a to pointer of p
//     a = 10; // assigining the value to a
//     // std::cout << *p << '\n';
//     printf("Addres of p is %d \n", p); // this will return the address of a;
//     printf("%d \n", *p);               // this will return the vaule of a;
//     printf("%d \n", &a);               // this will return the memory address of a;

//     /*** Deferencing concepts in c++ ***/
//     // so now i will modify the value of "a" using "p", this is the main function of the pointers; where we can change the value without getting into actual address;
//     *p = 12; // this concept is called dereferencing
//     printf("Size of the integer is %d \n", sizeof(int));

//     // pointer arithmetic-> looks like performing the mathmatical operations using pointers
//     /*
//     int = will take 4 bytes of memory;
//     char = will take 1 bytes of memory;
//     bool = will take 1 bytes of memory;
//     float = will take 4 bytes of memory;
//     double = will take 8 bytes of momory;
//     std::string will take 24 bytes of memory;

//     */
//     printf("Address of p+1 is %d \n", p + 1); // this will take another 4 bytes of memory by 1(which is an integer)
// };

/***
Pointer as the function arguments-> call reference
***/

// the variable declared in increment function and main function will have different memory address, so the increment function will not get add up.
// void Increment(int *p)
// {
//     *p = (*p) + 1;
// }

// int main()
// {
//     int a;
//     a = 10;
//     Increment(&a); /// this will call increment functions, where the value will be stored at "a" address
//     printf("a = %d", a);
// }

// pointers and arrays

// int SumOfElements(int A[], int size)
// {
//     int i, sum = 0;

//     for (i = 0; i < size; i++)
//     {
//         sum += A[i];
//     }
//     return sum;
// };

// int main()
// {
//     int A[] = {1, 2, 3, 4, 5};
//     int size = sizeof(A) / sizeof(A[0]);
//     int total = SumOfElements(A, size);
//     printf("sum of all elements is = %d", total);
// }

// Code practice, 1 hour
/*
most basics in any programing languages
1. Data types
2. functions
3. operators
4. conditions
will be mastering this four technique today
*/

// declaring variables and datatypes
// std::string name = '8bytes';
// int age = 4 bool sangay = true; // this will take one 1 bytes
// char a = 'a';                   // this will take one bytes of memory
// float height;
// double height = 9.4; // this will take 8 bytes of memory

// writing the functions in c++, i will write the simple function that will be called to main function
// void increment()
// {
//     // this is the simple function in c++, where it can be called as the called stack functions, because it is being stored in the stack memory of the applications
//     std::cout << "this is the first function, which will be stored in the stack memory of the applications \n";
// };
// int main()
// {
//     increment();
//     std::cout << "this will be the main function \n";
//     return 0;
// }

/*
will test the cin and cout functions in c++, where first the global variables will be declared.
where from the input, we will ask the user(age) input using the cin methods in c++
*/
// int age;
// std::string name;
// int main()
// {
//     std::cout << "*** Welcome guys, i invite you to play a simple game...*** \n";

//     std::cin >> name;
//     std::cout << "Hi, " << name << "\n";

//     std::cout << "How old are you? \n";
//     std::cin >> age;

//     std::cout << "Welcome " << name << " Your are " << age << " old! ";
// }

// using the conditions such as, if, if else
// using the looping, for loop, while loop, for while loop
// int age;

// int agecheck()
// {
//     if (age > 18)
//     {
//         std::cout << "Your allowed to drink \n";
//     }
//     else
//     {
//         std::cout << "Your are not allowed to drink \n";
//     }
//     return 0;
// };
// int main()
// {
//     std::cin >> age;
//     std::cout << agecheck();
//     // return 0;
// }

// the operators in the c++ works just like any other programming languages, where it will be same

// mastering loops, for loop, for each loop, while loop, for while loop

// will loop through numbers where it will return from 1-10;

/*
Three types of loop in c++
for loopint i = 0;    //  O(1);
// while (i < 9) // this is the conditions for the while loop n(n+1);
// {
//     // body of the loop
//     // this variable increment should be here ( this will run n numbers of times as long it is above conditions are true)
//     i++;
// }
while loop {
    syntax for the while loop

    while(conditions){
        // the code to be excuted
    }
}
do while loop
*/
// void counting()
// {int i = 0;    //  O(1);
// while (i < 9) // this is the conditions for the while loop n(n+1);
// {
//     // body of the loop
//     // this variable increment should be here ( this will run n numbers of times as long it is above conditions are true)
//     i++;
// }

//     for (int i = 0; i < 10; i++)
//     {
//         std::cout << i << std::endl;
//     }
// };
// int main()
// {
//     counting();
//     std::cout << "welcome to the loop, life is loop";
//     return 0;
// }

// writing a do while loop

// while loop => the basic syntax of the while loop;

// int main()
// {
//     int i = 0;
//     while (i < 5)
//     {
//         std::cout << i << "\n";
//         i++;
//     }
//     return 0;
// }

// do while loop
// int main()
// {
//     // write the do while loop here
//     int i = 0; // the varibles init should be always outside loop body of the while and do while loop

//     do
//     {,
//         // conditions should be written inside the do
//         std::cout << i << "\n";
//         i++;

//     } while (i < 5);
//     return 0;
// }

// thats all for the basic functions, loops, and the statement inside c++

/*
** SO NOW LETS GET INTO MORE ADVANCE CONCEPTS OF CLASS AND OBJECTS INSIDE THE C++ **
*/
/*
The four  main pillars of oops concepts are
1. abstraction -> hiding in the complex part
2. inheritance -> reusing the class property of the parent class
3. polymorphism -> grouping the class and objects that belong to the same type
4. incapsulations -> hiding the sensitive information from the other developers, while making the class private
*/

// class -> it is the model of the data
// object -> it is sub-set of the class, where it will have there own methods and property
// using std::string;

// class Home
// {
//     // defining the user data
//     string HomeType;
//     string address;
//     int num;

//     // defining the methods to envoke that functions;

// } int main()
// {
//     // objects will be defined here
// }

// using the function pointers in c++,
// int Add(int a, int b)
// {
//     return a + b;
// };

// int main()
// {
//     int c;
//     int (*p)(int, int);
//     p = &Add;
//     c = (*p)(2, 3); // deferencing and excuting the funtion
//     printf("%d", c);
// }

// what is the time complexity of the while loop

// the variable init should be from here
// int i = 0;    //  O(1);
// while (i < 9) // this is the conditions for the while loop n(n+1);
// {
//     // body of the loop
//     // this variable increment should be here ( this will run n numbers of times as long it is above conditions are true)
//     i++;
// }


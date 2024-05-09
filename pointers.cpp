#include <iostream>
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

int SumOfElements(int A[], int size)
{
    int i, sum = 0;

    for (i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
};

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    int total = SumOfElements(A, size);
    printf("sum of all elements is = %d", total);
}

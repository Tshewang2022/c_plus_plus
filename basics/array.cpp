// understanding the basic of computers is very much required
// primitive data types , bool, int(short, long, double long=> signed || unsigned), char
#include <iostream>

int main()
{
    // primitive data type, done
    // arthemitic operations (basic algos) done
    // control structure(for, if:else, while, do while);
    // pointers(single pointers, double pointers, and smart pointers)
    // derivied data types =>[arrays], [queues], [maps], [stacks];
    // sorting algo
    // searching algo
    // complex algo
    int x = 6;
    int y = 8;
    int arry[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // so now build the array from the given int
    for (int i = 0; i < 8; i++)
    {
        // create a array from one to 8;
        int arry[8];
        arry[i] = i + 1;
    }

    // loop over to print the array
    for (int i = 0; i < 8; i++)
    {
        std::cout << arry[i] << std::endl;
    }
    
    std::cout << "Size of " << sizeof(arry) / sizeof(arry[0]) << std::endl;
    // endline
}
#include <iostream>
#include <vector>

int main()
{
    // creating the vector
    std::vector<int> numbers;
    numbers.push_back(0);
    for (int i = 0; i < 10; i++)
    {
        numbers.push_back(i);
    }

    // printing of the vectors using the simple method
    // for (int number : numbers)
    // {
    //     std::cout << number << std::endl;
    // }

    // printing of vectors using the iterative method
    for (auto it = numbers.begin(); it != numbers.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    // certain features of vector
    std::cout << "size " << numbers.size() << std::endl;
    std::cout << "capacity " << numbers.capacity() << std::endl;
    numbers.clear();
    return 0;
}
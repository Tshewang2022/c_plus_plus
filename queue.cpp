#include <iostream>
#include <queue>

int main()
{
    // first in first out method
    /*methods in queue, font, back, push, pop, swap*/
    std::queue<int> student;
    student.push(9);
    student.push(10);
    student.push(1);

    int back = student.back();
    int front = student.front();
    int popped_value = student.front();
    student.pop();

    std::cout << " font of the queue is " << front << std::endl;
    std::cout << " back of the queue is " << back << std::endl;
    std::cout << " popped value of the queue is " << popped_value << std::endl;
    return 0;
}
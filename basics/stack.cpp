#include <iostream>
#include <stack>

int main()
{
    std::stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);

    while (!s.empty())
    {
        std::cout << s.top() << std::endl;
    }
    return 0;
}
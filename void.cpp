#include <iostream>
using namespace std;
// this will result in the error, because void does not return anything;s
void calculate(int x, int y)
{
    return y + x;
};
int main()
{
    int y = calculate(5, 7);
    std::cout << "the number that we got is" << y << endl;
}
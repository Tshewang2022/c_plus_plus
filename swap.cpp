#include <iostream>
using namespace std;

int main()
{
    // swap function in c++
    string x = "water";
    string y = "potatos";

    // temp variable
    string temp;
    temp = y;
    y = x;
    x = temp;
    cout << "the value has been swaped successfully " << x << endl;
    cout << "the value has been swaped successfully " << y << endl;
    return 0;
}
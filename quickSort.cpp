#include <iostream>
using namespace std;
int main()
{
    // will be designing the quick sort algorithm

    int A[5];
    cout << "Enter size of the array 5, to sort using the quick sort" << endl;
    // looping for the user input
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    };
    // printing of the user input
    cout << "The array before the quick sort" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    // cout << "The quick sort algorithm works on the divide and conqure methods" << endl;
    return 0;
}
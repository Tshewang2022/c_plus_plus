#include <iostream>
using namespace std;

int partition(int A[], int l, int h)
{
    int pivot = A[l]; // Select the first element as the pivot
    int i = l + 1;    // Start from the next element
    int j = h;        // Start from the last element

    while (true)
    {
        // Increment i while A[i] is less than or equal to pivot and within bounds
        while (i <= h && A[i] <= pivot)
        {
            i++;
        }

        // Decrement j while A[j] is greater than pivot and within bounds
        while (j > l && A[j] > pivot)
        {
            j--;
        }

        // If i and j have crossed, we are done
        if (i >= j)
        {
            break;
        }

        // Swap A[i] and A[j]
        swap(A[i], A[j]);
    }

    // Place the pivot in its correct position
    swap(A[l], A[j]);
    return j; // Return the index of the pivot
}

int main()
{
    int A[5];
    cout << "Enter the size of the array of 5, to perform the quick sort" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }

    cout << "The array before performing the quick sort: ";
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    int pivotIndex = partition(A, 0, 4);
    cout << "Array after partitioning around the pivot: ";
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

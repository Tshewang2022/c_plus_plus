#include <iostream>
#include <algorithm>
using namespace std;

int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l + 1;
    int j = h;

    while (true)
    {
        while (i <= h && A[i] <= pivot)
        {
            i++;
        }
        while (j > l && A[j] > pivot)
        {
            j--;
        }
        if (i >= j)
        {
            break;
        }
        swap(A[i], A[j]);
    }

    swap(A[l], A[j]);
    return j; // Return the index of the pivot
}

void quickSort(int A[], int l, int h)
{ // Accept the array as a parameter
    if (l < h)
    {
        int j = partition(A, l, h); // Pass the array to partition
        quickSort(A, l, j - 1);     // Corrected indices for recursion
        quickSort(A, j + 1, h);
    }
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

    quickSort(A, 0, 4); // Call quickSort to sort the array
    cout << "Array after performing the quick sort: ";
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

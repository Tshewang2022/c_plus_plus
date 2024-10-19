#include <iostream>

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
};
int partition(int low, int high, int A[])
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;

    while (true)
    {

        while (i <= high && A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot && j >= low)
        {
            j--;
        }

        if (i < j)
        {
            Swap(A[i], A[j]);
        }
        else
        {
            break;
        }
    }

    Swap(A[low], A[j]);
    return j;

    void quickSort(int n, int A[], int low, int high)
    {
        if (low < high)
        {
            int j = partition(low, high, A);
            quickSort(n, A, low, j - 1);
            quickSort(n, A, j + 1, high);
        }
    }

    int main()
    {
        int A[] = {2, 1, 3, 5, 6};
        int n = sizeof(A) / sizeof(A[0]);
        quickSort(n, A, 0, n - 1);

        for (int i = 0; i < n; i++)
        {
            std::cout << A[i] << " ";
        }
        std::cout << std::endl;

        return 0;
    }
}

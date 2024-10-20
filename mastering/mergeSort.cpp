#include <iostream>
using namespace std;
/* sudo code for the merge sort algorithm
    int mergeSort(){
        needs to perform the action on the arrays
    }
    int main(){
    int A[] = {2, 5, 1, 7, 9};
    int n = sizeof(A)/sizeof(A[0]);
    int low = 0;
    int high = n;
    int mid = low=(high-low)/2;

    if(low<high){
        left side
        mergeSort(low, mid);

        right side
        mergeSort(mid+1, high);

        merge both the side
        merge(low, mid, high);
        }
    }
    */
void merge(int A[], int l, int h)
{
    int mid = l + (h - l) / 2;
    int i = l;
    int j = mid + 1;
    int k = l;
    int temp[5];

    // given the fact that i is less than j or i is greater. given the same size of the array of i and j
    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
        {
            temp[k] = A[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = A[j];
            j++;
            k++;
        }
    }
    // given the array size of i is samller than j;
    while (i <= mid)
    {
        temp[k] = A[i];
        i++;
        k++;
    }
    // given the array of size j is smalller than i;
    while (j <= h)
    {
        temp[k] = A[j];
        j++;
        k++;
    }
    // transfering of all the temp array into main array
    for (int p = l; p <= h; p++)
    {
        A[p] = temp[p];
    }
};
void mergeSort(int A[], int l, int h)
{
    // setting the base condition for the recursion
    int mid = l + (h - l) / 2;
    if (l < h)
    {
        mergeSort(A, l, mid);
        mergeSort(A, mid + 1, h);
        merge(A, l, h);
    }
};
int main()
{
    int A[5];
    cout << "Enter the array of size 5 to sort using mergeSort: " << endl;
    // Taking user input
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    cout << "The array before it is sorted: ";
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }

    // function to perform the mergeSort
    mergeSort(A, 0, 4);
    cout << "The array after the merge sort" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }

    // loop to display after the mergeSort has been performed
    return 0;
}

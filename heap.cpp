#include <iostream>
#include <vector> // Include vector header

using namespace std;

// sorting algorithm using the heap method

/* first method is creating the max heap */
void heapify(int size, int curr, vector<int> &heap)
{
    // defining the node position in binary tree of max heap
    int largest = curr;
    int l = 2 * curr + 1; // Fixed to use correct index for left child
    int r = 2 * curr + 2; // Fixed to use correct index for right child

    // finding the largest from the given binary tree
    if (l < size && heap[l] > heap[largest]) // Fixed logical operator
    {
        largest = l;
    }
    if (r < size && heap[r] > heap[largest]) // Fixed logical operator
    {
        largest = r;
    }

    // replace the largest node into the current position, repeat the process until it is max binary tree
    if (largest != curr)
    {
        int temp = heap[curr];
        heap[curr] = heap[largest];
        heap[largest] = temp;
        heapify(size, largest, heap); // Fixed function call parameters
    }
}

void heapSort(vector<int> &heap)
{
    // building the heap
    int size = heap.size();                 // Added size variable
    for (int i = size / 2 - 1; i >= 0; --i) // Fixed loop condition
    {
        heapify(size, i, heap); // Fixed function call
    }

    // now extracting the heap
    for (int i = size - 1; i > 0; --i) // Fixed loop condition
    {
        int temp = heap[0];
        heap[0] = heap[i];
        heap[i] = temp;
        heapify(i, 0, heap); // Fixed function call
    }
}

int main()
{
    vector<int> heap{9, 6, 8, 2, 1, 4, 3};
    heapSort(heap);

    for (int i = 0; i < heap.size(); i++)
    {
        std::cout << heap[i] << std::endl;
    }
    return 0;
}

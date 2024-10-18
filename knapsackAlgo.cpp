#include <iostream>
#include <algorithm> // For std::max

int main()
{
    int pt[5] = {0, 1, 2, 5, 6}; // Points/values of items
    int wt[5] = {0, 2, 3, 4, 5}; // Weights of items

    int m = 8;   // Maximum weight capacity
    int n = 4;   // Number of items
    int K[5][9]; // DP table

    // Build the K table
    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= m; w++)
        {
            if (i == 0 || w == 0)
            {
                K[i][w] = 0; // Base case: no item or zero capacity
            }
            else if (wt[i] <= w)
            {
                K[i][w] = std::max(pt[i] + K[i - 1][w - wt[i]], K[i - 1][w]);
            }
            else
            {
                K[i][w] = K[i - 1][w]; // Cannot include the item
            }
        }
    }
    // Output the maximum value
    std::cout << "The maximum value that can be obtained is: " << K[n][m] << std::endl;

    return 0;
}

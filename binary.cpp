#include <iostream>
#include <string>
using namespace std;

// find out the count of the numbers that I have repeated in the arrays
int findOccurance(int nums[], int n, int x, bool searched)
{
    int low = 0;
    int high = n - 1;
    int result = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == x)
        {
            result = mid;
            if (searched)
            {
                high = mid - 1; // search for the first occurrence
            }
            else
            {
                low = mid + 1; // search for the last occurrence
            }
        }
        else if (x > nums[mid])
        {
            low = mid + 1;
        }
        else // fixed condition here
        {
            high = mid - 1; // change made
        }
    }
    return result;
};

int main()
{
    int x;
    int nums[] = {1, 1, 1, 2, 2, 2, 3, 3, 4, 5, 6, 6, 6};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << "Enter the number that you want to find the occurrence of: " << endl;
    cin >> x;
    int firstIndex = findOccurance(nums, n, x, true);

    if (firstIndex == -1)
    {
        cout << "Count of number " << x << " is 0" << endl; // corrected message
    }
    else
    {
        int lastIndex = findOccurance(nums, n, x, false);
        cout << "Count of number " << x << " is " << lastIndex - firstIndex + 1 << endl; // fixed syntax
    }
    return 0;
}

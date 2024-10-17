#include <iostream>
using namespace std;

int rotationCount(int nums[], int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int prev = mid + (n - 1) % n;
        int next = (mid + 1) % n;

        // given the element is not rotated
        if (nums[low] <= nums[high])
        {
            return low;
        };
        // given if the pivot element in the mid
        if (nums[mid] <= nums[next] && nums[mid] <= nums[prev])
        {
            return mid;
        }
        else if (nums[mid] <= nums[high])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
};
int main()
{
    // given the numbers in the array are sorted and  contains no duplicates
    int nums[] = {13, 14, 15, 2, 4, 5, 6, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    int count = rotationCount(nums, n);
    cout << "the array has been rotated " << count << endl;
    return 0;
}
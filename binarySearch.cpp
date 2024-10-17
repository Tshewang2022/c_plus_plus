// #include <iostream>
// using namespace std;

// int searchNums(int nums[], int n, int x)
// {
//     int low = 0;
//     int high = n - 1;

//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (nums[mid] == x)
//         {
//             return mid;
//         }
//         else if (nums[mid] > x)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int x;
//     int nums[] = {1, 2, 3, 4, 5, 6};
//     int n = sizeof(nums) / sizeof(nums[0]);

//     cout << "Enter the number that you want to search: ";
//     cin >> x;

//     int result = searchNums(nums, n, x);

//     if (result != -1)
//     {
//         cout << "The number " << x << " is found at index " << result[x] << "." << endl;
//     }
//     else
//     {
//         cout << "The number is not found in the array." << endl;
//     }

//     return 0;
// }

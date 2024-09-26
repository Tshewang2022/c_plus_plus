// #include <iostream>
// #include <vector>

// class Solution
// {
// public:
//     std::vector<int> twoSum(std::vector<int> &nums, int target)
//     {
//         for (int i = 0; i < nums.size(); i++)
//         {
//             for (int j = i + 1; j < nums.size(); j++)
//             {
//                 if (nums[i] + nums[j] == target)
//                 {
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };

// int main()
// {                                         // Single definition of main
//     Solution solution;                    // Create an instance of Solution
//     std::vector<int> nums = {1, 2, 3, 4}; // Use a vector
//     int target = 4;

//     std::vector<int> result = solution.twoSum(nums, target); // Call twoSum on the instance

//     if (!result.empty())
//     {
//         std::cout << "Indices: [" << result[0] << ", " << result[1] << "]" << std::endl;
//     }
//     else
//     {
//         std::cout << "No solution found." << std::endl;
//     }

//     return 0;
// }

#include <vector>
#include <iostream>

int removeDuplicates(std::vector<int> &nums)
{
    if (nums.empty())
    {
        return 0;
    }

    int k = 1; // Start k from 1 since the first element is always unique

    for (int i = 1; i < nums.size(); ++i)
    {
        if (nums[i] != nums[i - 1])
        {                      // Compare with the previous element
            nums[k] = nums[i]; // Assign the unique element
            k++;               // Move the pointer for unique elements
        }
    }

    return k; // Return the number of unique elements
}

int main()
{
    std::vector<int> nums = {1, 1, 2, 2, 3, 4};
    int k = removeDuplicates(nums);

    std::cout << "Number of unique elements: " << k << std::endl;
    std::cout << "Unique elements: ";
    for (int i = 0; i < k; ++i)
    {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

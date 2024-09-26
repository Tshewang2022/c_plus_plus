#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main()
{                                         // Single definition of main
    Solution solution;                    // Create an instance of Solution
    std::vector<int> nums = {1, 2, 3, 4}; // Use a vector
    int target = 4;

    std::vector<int> result = solution.twoSum(nums, target); // Call twoSum on the instance

    if (!result.empty())
    {
        std::cout << "Indices: [" << result[0] << ", " << result[1] << "]" << std::endl;
    }
    else
    {
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}

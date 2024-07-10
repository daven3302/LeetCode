#include <iostream>
#include "Solution.h"

int main()
{
    Solution solution;
    vector<int> nums = {10,1,2,4,7,2};
    int limit = 5;
    int result = solution.longestSubarray(nums, limit);
    cout << result << endl;
    return 0;
}
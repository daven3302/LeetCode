#include <iostream>
#include "Solution.h"
#include <algorithm>
int main()
{
    vector<int> nums = {3,2,4,2,3};
    int val = 4;
    Solution solution;
    solution.removeElement(nums,val);
    return 0;
}
#include <vector>
#include <cmath>
using namespace std;

class Solution 
{
public:
    int search(vector<int>& nums, int target) 
    {
        int left,right,middle;
        left = 0;
        right = nums.size()-1;        
        do
        {
            middle = (left + right) / 2;
            if(target <= nums[middle])
                right = middle;
            else
                left = middle;
            if(target == nums[left])
                return left;
            if(target == nums[right])
                return right;
        } while (abs(left - right) > 1);
        return -1;
    }
};
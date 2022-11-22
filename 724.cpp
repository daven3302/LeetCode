#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums);

int main()
{
    vector<int> input = {2,1,-1};
    cout << pivotIndex(input) << endl;
    return 0;
}

int pivotIndex(vector<int>& nums) 
{
    int left,right;
    //initialize 
    left = right = 0;   //initialize left
    for(int i = 1 ; i < nums.size() ; i++)
        right += nums[i];   //initialize right

    for(int i = 0 ; i < nums.size() ; i++)
    {
        if(i != 0)
        {
            left += nums[i-1];
            right -= nums[i];
        }
        if(left == right)
            return i;
    }
    return -1;
}
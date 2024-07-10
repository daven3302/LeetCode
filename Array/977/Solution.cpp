#include <iostream>
#include "Solution.h"
int main()
{
    Solution soultion;
    vector<int> nums = {-4,1,0,3,10};
    for(auto p:soultion.sortedSquares(nums))
        cout << p << " ";
    cout << endl;
    return 0;
}
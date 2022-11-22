#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int>& nums);

int main()
{
    vector<int>::iterator p;
    vector<int> a = {3,1,2,10,1};
    vector<int> ans = runningSum(a);
    for(p = ans.begin() ; p != ans.end() ; p++)
        cout << *p << ",";
    cout << endl;
    return 0;
}

vector<int> runningSum(vector<int>& nums) 
{
    vector<int> ans;
    ans.clear();
    for(int i = 0 ; i < nums.size() ; i++)
    {
        if(i == 0)
            ans.push_back(nums[0]);
        else
            ans.push_back(ans[i-1]+nums[i]);
    }
    return ans;
}
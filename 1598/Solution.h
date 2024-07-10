#include <vector>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    const string remainDirectory = "./";
    const string parentDirectory = "../";
    int minOperations(vector<string>& logs) {
        int result = 0;
        stack<string> fileTree;
        for(auto p:logs)
        {   
            if(p == remainDirectory)
            {
            }
            else if(p == parentDirectory)
            {
                if(!fileTree.empty())
                    fileTree.pop();
            }
            else
                fileTree.push(p);
        }
        
        while(!fileTree.empty())
        {
            result++;
            fileTree.pop();
        }
        return result;
    }
};
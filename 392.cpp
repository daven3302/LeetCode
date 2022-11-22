#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(string s, string t);

int main()
{
    string s = "acb";
    string t = "ahbgdc";
    cout << isSubsequence(s,t) << endl;
    return 0;
}

bool isSubsequence(string s, string t)
{
    bool flag;
    int start = -1;
    for(auto p = s.begin() ; p != s.end() ; p++)
    {
        flag = false;
        for(int i = start+1 ; i < t.size() ; i++)
        {
            if(*p == t[i])
            {
                flag = true;
                start = i;
                break;
            }
        }
        if(!flag)
            return false;
    }       
    return true;
}
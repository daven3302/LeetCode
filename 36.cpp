#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    vector<vector<char>> a = {{".","8","7","6","5","4","3","2","1"},{"2",".",".",".",".",".",".",".","."},{"3",".",".",".",".",".",".",".","."},{"4",".",".",".",".",".",".",".","."},{"5",".",".",".",".",".",".",".","."},{"6",".",".",".",".",".",".",".","."},{"7",".",".",".",".",".",".",".","."},{"8",".",".",".",".",".",".",".","."},{"9",".",".",".",".",".",".",".","."}};
}



bool isValidSudoku(vector<vector<char>>& board) {
        map<int,int>cache;
        for(int i = 0 ; i < 9 ; i++)
        {
            for(int j = 0 ; j < 9 ; j++)
            {
                if(board[i][j]!='.')
                    cache[board[i][j]]++;
                if(cache[board[i][j]] > 1)
                    return false;
            }
            cache.clear();
        }
        for(int i = 0 ; i < 9 ; i++)
        {
            for(int j = 0 ; j < 9 ; j++)
            {
                if(board[j][i]!='.')
                    cache[board[j][i]]++;
                if(cache[board[j][i]] > 1)
                    return false;
            }
            cache.clear();
        }
        for(int k = 0 ; k < 3 ; k++)
        {
            for(int l = 0 ; l < 3 ; l++)
            {
                cache.clear();
                for(int i = 0 ; i < 3 ; i++)
                {
                    for(int j = 0 ; j < 3 ; j++)
                    {
                        if(board[i+3*k][j+3*l]!='.')
                            cache[board[i+3*l][j+3*l]]++;
                        if(cache[board[i+3*l][j+3*l]] > 1)
                            return false;
                    }
                }
            }
        }
        return true;
    }
#include <bits/stdc++.h>

using namespace std;

// [0,1,2,3,4,5] =>

bool isSubThree(vector<vector<char>> &board, int r, int c)
{

    vector<bool> vis(10);

    for (int i = r; i < r + 3; i++)
    {
        for (int j = c; j < c + 3; j++)
        {
            if (board[i][j] != '.')
            {

                if (vis[board[i][j] - '1'])
                {
                    return false;
                }
                else
                    vis[board[i][j] - '1'] = true;
            }
        }
    }
    return true;
}

bool isValid(vector<vector<char>> &board)
{

    // n=9
    for (int i = 0; i < 9; i++)
    {

        vector<bool> row(9, false);
        vector<bool> col(9, false);
        for (int j = 0; j < 9; j++)
        {

            if (board[i][j] != '.')
            {

                // row checking
                for (int k = 0; k < 9; k++)
                {
                    if (row[board[i][k] - '1'])
                    {
                        return false;
                    }
                    else
                        row[board[i][k] - '1'] = true;
                }

                //col checking
                if (board[j][i] != '.')
                {
                    if(col[board[j][i]-'1']){
                        return false;
                    }
                    else
                        col[board[j][i]-'1']=true;   
                }

            }
            // column checking
                
        }
    }

    // for 3x3 submatrix
    for (int i = 0; i < 9; i += 3)
    {
        for (int j = 0; j < 9; j += 3)
        {

            if (!isSubThree(board, i, j))
            {
                return false;
            }
        }
    }
    return true;
}
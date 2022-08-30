#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<string>> mergeDetails(vector<vector<string>> &details)
    {
        // code here

        vector<vector<string>> student_details;
        vector<string> merge_details;

        for (int i = 0; i < details.size(); i++)
        {
            bool flag = false;
            for (int j = 0; j < details[i].size(); j++)
            {

                if (i > 0 and details[i][0] == details[i - 1][0] and flag == false)
                {

                    for (int k = 1; k < details[i].size(); k++)
                    {
                        if (details[i][k] == details[i - 1][k])
                        {
                            flag = true;
                            break;
                        }
                        else
                        {
                            merge_details.push_back(details[i][j]);
                        }
                    }
                }
                else
                {
                    merge_details.push_back(details[i][j]);
                }
            }

            sort(merge_details.begin() + 1, merge_details.end());
            student_details.push_back(merge_details);
            merge_details.clear();
        }

        // student_details.push_back(merge_details);
        return student_details;
    }
};
#include <bits/stdc++.h>

using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    // Write your code here.

    long long int largest = 0;
    long long int second_largest;
    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
        if (largest < a[i])
        {
            second_largest = largest;
            largest = a[i];
        }
        else if (second_largest < a[i])
        {
            second_largest = a[i];
        }
    }
    int ss = INT_MAX;
    int fs = INT_MAX;
    for (int i = 0; i < a.size(); i++)
    {
        if (fs > a[i])
        {
            ss = fs;
            fs = a[i];
        }
        else if (ss > a[i])
        {
            ss = a[i];
        }
    }
    ans.push_back(second_largest);
    ans.push_back(ss);

    return ans;
}

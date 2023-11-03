#include <bits/stdc++.h>

using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    // Write your code here

    vector<int> v;
    int i = 0, j = 0;
    int n = a.size();
    int m = b.size();
    if (a[0] < b[0])
    {
        v.push_back(a[0]);
        i++;
    }
    else
    {
        v.push_back(b[0]);
        j++;
    }

    while (i < n and j < m)
    {

        if (a[i] < b[j])
        {
            if (v[v.size() - 1] != a[i])
            {
                v.push_back(a[i]);
            }
            i++;
        }
        else if (a[i] == b[j])
        {
            if (v[v.size() - 1] != a[i])
            {
                v.push_back(a[i]);
            }
            i++;
            j++;
        }
        else if (a[i] > b[j])
        {
            if (v[v.size() - 1] != b[j])
            {
                v.push_back(b[j]);
            }
            j++;
        }
    }
    // cout<<"i :"<<i<<" "<<"j: "<<j<<endl;
    while (i < n)
    {
        if (v[v.size() - 1] != a[i])
            v.push_back(a[i]);

        i++;
    }
    while (j < m)
    {
        if (v[v.size() - 1] != b[j])
            v.push_back(b[j]);

        j++;
    }
    // cout<<"i :"<<i<<" "<<"j: "<<j<<endl;
    return v;
}
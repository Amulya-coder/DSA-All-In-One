/*
Given an array of size N containing positive integers n and a number k,The absolute difference between values at indices i and j is |a[i] – a[j]|. There are n*(n-1)/2 such pairs and you have to print the kth smallest absolute difference among all these pairs.

Example 1:

Input :
N = 4
A[] = {1, 2, 3, 4}
k = 3
Output :
1
Explanation :
The possible absolute differences are :
{1, 2, 3, 1, 2, 1}.
The 3rd smallest value among these is 1.

Example 2:
Input :
N = 2
A[] = {10, 10}
k = 1
Output :
0
*/
#include <bits/stdc++.h>

using namespace std;

void kthDiff(int a[], int n, int k)
{
    // brute force
    int minimum = INT_MAX;
    vector<int> v;
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // int small=abs(a[i]-a[j]);

            v.push_back(abs(a[i] - a[j]));
        }
    }

    sort(v.begin(), v.end());
    int s = v.size();
    for (int i = 0; i < s; i++)
    {
        k--;

        if (k == 0)
            cout << v[i] << " ";
    }
}

int main()
{

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;

    kthDiff(a, n, k);
}

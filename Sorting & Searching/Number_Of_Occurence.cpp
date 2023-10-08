#include <bits/stdc++.h>

using namespace std;

int firstOcurrence(vector<int> arr, int n, int x)
{
    int l = 0;
    int h = arr.size() - 1;
    int first = -1;
    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (arr[mid] == x)
        {
            first = mid;
            h = mid - 1;
        }
        else if (arr[mid] > x)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return first;
}

int lastOccurence(vector<int> arr, int n, int x)
{
    int l = 0;
    int h = arr.size() - 1;
    int last = -1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == x)
        {
            last = mid;
            l = mid + 1;
        }
        else if (arr[mid] > x)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return last;
}

int count(vector<int> &arr, int n, int x)
{
    // Write Your Code Here

    int first = firstOcurrence(arr, n, x);
    if (first == -1)
        return 0;

    int last = lastOccurence(arr, n, x);
    return (last - first + 1);
}

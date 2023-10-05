#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &arr)
    {

        int n = arr.size();
        if (n == 1 or arr[0] > arr[1])
            return 0;

        else if (arr[n - 1] > arr[n - 2])
            return n - 1;

        else
        {
            int l = 1;
            int h = n - 2;

            while (l <= h)
            {
                int mid = (l + h) / 2;

                if (arr[mid] > arr[mid - 1] and arr[mid] > arr[mid + 1])
                    return mid;
                else if (arr[mid] > arr[mid - 1] and arr[mid] < arr[mid + 1])
                    l = mid + 1;
                else
                    h = mid - 1;
            }
        }

        return -1;
    }
};
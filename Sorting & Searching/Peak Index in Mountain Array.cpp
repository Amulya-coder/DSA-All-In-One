#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {

        // Tie Complexity O(n)
        int ans = -1;
        for (int i = 1; i < arr.size() - 1; i++)
        {
            if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1])
            {
                ans = i;
                break;
            }
        }
        return ans;

        // Using B.S.
        int l = 1;
        int h = arr.size() - 2;
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

        return -1;

        //        if arr.length<3
        //        if(n==1 or arr[0]>arr[1])return 0;

        //         else if(arr[n-1]>arr[n-2])return n-1;
        //         else{
        //         for(int i=0;i<n;i++){
        //             if((i!=0 and i!=n-1) and arr[i]>=arr[i-1] and arr[i]>arr[i+1])return i;
        //         }

        //         }
        //         return -1;
    }
};
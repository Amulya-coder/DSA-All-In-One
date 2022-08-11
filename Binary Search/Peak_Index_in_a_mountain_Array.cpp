/*
An array arr a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {

        // Brute force O(n)
        /*
        int ans=-1;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){
                ans=i;
                break;
            }

        }
        return ans;
        */

        // Binary Search o(logn)
        int l = 1;
        int r = arr.size() - 2;
        int mid = -1;

        while (l <= r)
        {
            mid = (l + r) / 2;

            if (arr[mid] > arr[mid - 1] and arr[mid] > arr[mid + 1])
            {
                return mid;
            }
            else if (arr[mid] > arr[mid - 1] and arr[mid] < arr[mid + 1])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        return -1;
    }
};
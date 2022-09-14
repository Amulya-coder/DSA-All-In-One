#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {

        unordered_map<int, int> mp;
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            mp[nums1[i]]++;
        }

        for (int i = 0; i < nums2.size(); i++)
        {
            if (mp[nums2[i]] > 0)
            {
                ans.push_back(nums2[i]);
                mp[nums2[i]]--;
            }
        }
        // vector<int> ans;
        //         int i=0,j=0;
        //         int n=arr1.size();
        //         int m=arr2.size();

        //         //Time complexity O(n logn)
        //         sort(arr1.begin(),arr1.end());
        //         sort(arr2.begin(),arr2.end());
        //         while(i<n and j<m){
        //             if(arr1[i]<arr2[j]){
        //                 i++;
        //             }
        //             else if(arr1[i]>arr2[j]){
        //                 j++;
        //             }
        //             else{
        //                 ans.push_back(arr1[i]);
        //                 i++;
        //                 j++;
        //             }
        //         }

        return ans;
    }
};
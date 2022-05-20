/*
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.


Example 1:

Input:
N = 3
A[] = {1,2,3}
Output:
-1
Explanation:
Since, each element in
{1,2,3} appears only once so there
is no majority element.
Example 2:

Input:
N = 5
A[] = {3,1,3,3,2}
Output:
3
Explanation:
Since, 3 is present more
than N/2 times, so it is
the majority element.

Your Task:
The task is to complete the function majorityElement() which returns the majority element in the array. If no majority exists, return -1.


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).


Constraints:
1 ≤ N ≤ 10^7
0 ≤ Ai ≤ 10^6
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int majorityElement(int arr[], int size)
    {

        // Optimal solution
        // Using Moore's algorithm

        int count = 0;
        int majority;

        for (int i = 0; i < size; i++)
        {
            if (count == 0)
            {
                majority = arr[i];
                count++;
            }
            else
            {
                if (majority == arr[i])
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }
        }

        count = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == majority)
            {
                count++;
            }
        }

        return (count > (size / 2) ? majority : -1);
    }
    /*Solution using map
        unordered_map<int, int> mp;

        for (int i = 0; i < size; i++)
        {
            mp[arr[i]]++;
            if (mp[arr[i]] > (size / 2))
            {
                return arr[i];
            }
        }
        */
};
/*
Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

Example 1:

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given
array is 7.
Example 2:

Input:
N = 5
arr[] = 7 10 4 20 15
K = 4
Output : 15
Explanation :
4th smallest element in the given
array is 15.
Your Task:
You don't have to read input or print anything. Your task is to complete the function kthSmallest() which takes the array arr[], integers l and r denoting the starting and ending index of the array and an integer K as input and returns the Kth smallest element.


Expected Time Complexity: O(n)
Expected Auxiliary Space: O(log(n))
Constraints:
1 <= N <= 105
1 <= arr[i] <= 105
1 <= K <= N
*/
#include <bits/stdc++.h>

using namespace std;

class Solution
{
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
public:
    int kthSmallest(int arr[], int l, int r, int k)
    {
        // Optimal soln using priority queue(priority queue is used to store elements
        // in decreasing order)
        // Takes space of O(logn)

        priority_queue<int> numbers;

        // Time complexity of O(n)
        for (int i = 0; i <= r; i++)
        {
            numbers.push(arr[i]);

            if (numbers.size() > k)
            {
                numbers.pop();
            }
        }
        return numbers.top();
    }

    // My soln it will take O(n logn)
    /*
     r = r + 1;
    sort(arr, arr + r);

    for (int i = 0; i < r; i++)
    {
        k--;
        if (k == 0)
        {
            return arr[i];
        }
    }

    return -1;
    */
};
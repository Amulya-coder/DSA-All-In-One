/*
Given a sorted array A[] of size N, delete all the duplicates elements from A[].
Note: Don't use set or HashMap to solve the problem.


Example 1:

Input:
N = 5
Array = {2, 2, 2, 2, 2}
Output: 2
Explanation: After removing all the duplicates
only one instance of 2 will remain.
Example 2:

Input:
N = 3
Array = {1, 2, 2}
Output: 1 2

Your Task:
You don't need to read input or print anything. Complete the function remove_duplicate() which takes the array A[] and its size N as input parameters and modifies it in place to delete all the duplicates. The function must return an integer X denoting the new modified size of the array.
Note: The generated output will print all the elements of the modified array from index 0 to X-1.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 10^4
1 ≤ A[i] ≤ 10^6
*/
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int remove_duplicates(int arr[], int n)
    {

        long int j = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1])
            {

                // Because array is sorted
                arr[j++] = arr[i];
            }
        }
        return j;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        int n = ob.remove_duplicates(a, N);

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}
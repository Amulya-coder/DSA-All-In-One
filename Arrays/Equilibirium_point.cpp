/* GFG Practice
Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array.
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Note: Retun the index of Equilibrium point. (1-based index)

Example 1:

Input:
n = 5
A[] = {1,3,5,2,2}
Output: 3
Explanation: For second test case
equilibrium point is at position 3
as elements before it (1+3) =
elements after it (2+2).


Example 2:

Input:
n = 1
A[] = {1}
Output: 1
Explanation:
Since its the only element hence
its the only equilibrium point.


Your Task:
The task is to complete the function equilibriumPoint() which takes the array and n as input parameters and returns the point of equilibrium. Return -1 if no such point exists.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 <= n <= 10^6
1 <= A[i] <= 10^8
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = 0;
    int sum_so_far = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    if (n == 1)
    {
        cout << 1 << endl;
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum - a[i];
        if (sum == sum_so_far)
        {
            cout << i + 1 << endl;
            break;
        }
        sum_so_far = sum_so_far + a[i];
        // cout<<i<<" "<<sum_so_far<<endl;
    }
}
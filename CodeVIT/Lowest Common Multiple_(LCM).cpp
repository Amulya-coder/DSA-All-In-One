/*
Lowest Common Multiple (LCM)

You are given an array of positive integers, arr, of size array_length. You are asked to build set S which consists of the LCM of every pair of adjacent elements in arr. Your task is to find the largest element in set S.

For example, for the array {1, 2, 3, 4}, set S = { lcm(1,2), lcm(2,3), lcm(3,4) } = {2, 6, 12}. The largest element is 12.

Notes

The array contains only positive integers.

Adjacent elements may NOT be circular, i.e. they may not wrap around the end of the array

Definition of LCM

A multiple of a number, num, is a number that can be divided by num. For example, the multiples of 5 are 5, 10, 15, 20, 25, and so on. The lowest common multiple (LCM) of two numbers, a and b, is the smallest positive number that is a multiple of both a and b.

Code constraints:
4 <= array_length <= 105

1 <= array[i] <= 1500

Example 1

Input

4

1 3 2 4

Output

6

Explanation

set S = {lcm(1, 3), lcm(3, 2), lcm(2, 4) } = {3, 6, 4}

Largest element = 6

Example 2

Input

5

7 3 2 9 12

Output

36

Explanation

set S = { lcm(7, 3), lcm(3, 2), lcm(2, 9), lcm(9, 12) } = {21, 6, 18, 36}

Largest element = 36

Input format
The first line of input denotes the size of an array.

The next lines contain the space-separated integers denoting the value of the array.

Output format
The output contains an integer denoting the largest element in set S as specified in the problem statement.
*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int largestLCM(int arr[], int n)
{

    int largest = -999;

    for (int i = 1; i < n; i++)
    {

        largest = max(largest, (arr[i] * arr[i - 1]) / gcd(arr[i], arr[i - 1]));
    }

    return largest;
}

int main()
{
    // your code goes here

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The largest element after taking LCM b/w the pairs is " << largestLCM(arr, n) << endl;

    return 0;
}

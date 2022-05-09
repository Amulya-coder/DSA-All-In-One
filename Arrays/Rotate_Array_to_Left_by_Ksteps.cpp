/*
(left or counter-clockwise)
Rotate the array to counter-clockwise by d steps

Input: N=5 D=2

arr[]={1,2,3,4,5}

Ouput: {3,4,5,1,2}

*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void reverse(int arr[], int low, int high)
    {
        while (low < high)
        {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
    void rotate(int arr[], int n, int d)
    {

        d = d % n;
        // reverse from 0 to d-1
        reverse(arr, 0, d - 1);

        // revese from d to n-1
        reverse(arr, d, n - 1);

        // reverse the whole array
        reverse(arr, 0, n - 1);
    }
};

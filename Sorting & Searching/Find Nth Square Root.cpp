#include <bits/stdc++.h>

using namespace std;

int NthRoot(int n, int m)
{
    // Write your code here.

    // Using BS
    int low = 1;
    int high = m;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (pow(mid, n) == m)
        {
            return mid;
        }
        else if (pow(mid, n) > m)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
    // for(int i=1;i<=m;i++){
    //   if(pow(i,n)==m)
    //   return i;

    //   else if(pow(i,n)>m){
    //     break;
    //   }
    // }
    // return -1;
}
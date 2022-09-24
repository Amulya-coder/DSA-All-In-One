#include <bits/stdc++.h>

using namespace std;

// Approach: Shift the len number of bits to the left side and add the current number to
// the answer
// ans=(ans<<len)+i;

class Solution
{
public:
    int numberOfbits(int n)
    {
        return log2(n) + 1;
    }
    int concatenatedBinary(int n)
    {

        long int ans = 0;
        int MOD = 1e9 + 7;

        for (int i = 1; i <= n; i++)
        {

            int len = numberOfbits(i);
            ans = ((ans << len) + i) % MOD;
        }

        return ans;

        //         int j=1;
        //         int rem,i=1;
        //         long long int ans=0;
        //         string result="";
        //         int track=1;
        //         while(track<=n){
        //             if(j!=0){
        //                 rem=j%2;
        //                 ans+=rem*i;
        //                 i=i*10;
        //                 j=j/2;
        //                 // cout<<rem;
        //             }

        //             else{
        //                 track++;
        //                 result+=to_string(ans);
        //                 j=track;
        //             }
        //         }

        //         return result
    }
};
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {

        //        vector<int> boat;
        //        int i=0;
        //        int j=1;

        //         int count=0;
        //         sort(people.begin(),people.end());
        //         while(i<people.size()){
        //             if(people[i]+people[j]>limit){
        //                 count+=2;
        //                 j+=2;
        //                 i+=2;
        //             }
        //             else if(people[i]+people[j]<=limit){
        //                 if(people[j]<=limit){
        //                     count++;
        //                     j+=2;
        //                     i+=2;
        //                 }
        //             }
        //         }
        //         return count;

        sort(people.begin(), people.end());

        int left = 0, right = people.size() - 1;
        int count = 0;
        while (left <= right)
        {
            if (people[right] == limit)
            {
                count++;
                right--;
            }
            else if (people[left] + people[right] > limit)
            {
                count++;
                right--;
            }
            else
            {
                count++;
                left++;
                right--;
            }
        }
        return count;
    }
};

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int longestMountain(vector<int> &arr)
    {

        // Time Complexity O(n)
        int max_len = 0;
        int n = arr.size();
        for (int i = 1; i < arr.size() - 1; i++)
        {

            if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1])
            {

                int start_root = i;
                int end_root = i;

                while (start_root > 0 and arr[start_root] > arr[start_root - 1])
                {
                    start_root--;
                }

                while (end_root < n - 1 and arr[end_root] > arr[end_root + 1])
                {
                    end_root++;
                }
                max_len = max(max_len, end_root - start_root);
            }
        }

        if (max_len != 0)
        {
            return max_len + 1;
        }
        return max_len;
    }
};

//    while(k<arr.size() and j<arr.size()-1){
//            if(arr[i]>arr[j]){
//                i++;
//                j=i+1;
//            }
//            else{
//            if(arr[j]<=arr[j+1]){
//                j++;
//            }

//            else if(arr[j]>arr[j-1] and arr[j]>arr[j+1]){
//                for(k=j+1;k<arr.size();k++){
//                    if(arr[k]<arr[k-1]){
//                        continue;
//                    }
//                    else{
//                        break;
//                    }
//                }

//                max_len=max(max_len,k-i);
//            }

//                if(j<arr.size()-1){
//                i++;
//                j=i+1;
//                }
//           }

//         }
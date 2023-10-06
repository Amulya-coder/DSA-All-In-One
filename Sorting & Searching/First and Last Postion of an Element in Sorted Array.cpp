#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>
using namespace std;
// int lower_bound(vector<int>arr,int n,int x){
//     int l=0;
// 	int h=arr.size()-1;
// 	int ans;
// 	while(l<=h){
// 		int mid=(l+h)/2;
// 		if(arr[mid]>=x){
// 			ans=mid;
// 			h=mid-1;
// 		}
// 		else{
// 			l=mid+1;
// 		}
// 	}

// 	if(l>h){
// 		return l;
// 	}
// 	return ans;
// }

// int upper_bound(vector<int>arr,int n,int x){
//     int l=0;
// 	int h=arr.size()-1;
// 	int ans;
// 	while(l<=h){
// 		int mid=(l+h)/2;
// 		if(arr[mid]>x){
// 			ans=mid;
// 			h=mid-1;
// 		}
// 		else{
// 			l=mid+1;
// 		}
// 	}

// 	if(l>h){
// 		return l;
// 	}
// 	return ans;
// }

int firstOcurrence(vector<int> arr, int n, int x)
{
    int l = 0;
    int h = arr.size() - 1;
    int first = -1;
    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (arr[mid] == x)
        {
            first = mid;
            h = mid - 1;
        }
        else if (arr[mid] > x)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return first;
}

int lastOccurence(vector<int> arr, int n, int x)
{
    int l = 0;
    int h = arr.size() - 1;
    int last = -1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == x)
        {
            last = mid;
            l = mid + 1;
        }
        else if (arr[mid] > x)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return last;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    // Write your code here

    // int l_b=lower_bound(arr.begin(),arr.end(),k)-arr.begin();
    // int u_b=upper_bound(arr.begin(),arr.end(),k)-arr.begin();

    // if(arr[l_b]!=k || l_b==n){
    //     return {-1,-1};
    // }
    // return{l_b,u_b-1};

    int first = firstOcurrence(arr, n, k);
    if (first == -1)
        return {-1, -1};

    int last = lastOccurence(arr, n, k);

    return {first, last};
}

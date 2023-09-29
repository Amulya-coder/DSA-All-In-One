// Find the unique numbers
// Input: 20 40
// Output: 19
// Note: Unique numbers are those which have different units digit for ex: 20,21
// 22 and 33 are not
#include <bits/stdc++.h>
using namespace std;
// 20,21,23,24,25,26,27,28,29,30,31,32,34,35,36,37,38,39,40
// 40-20 = 20 - 2 + 1
//  21 - 30 = 9 - 0 + 1
int main()
{
    // your code goes here

    int lower, higher;
    cin >> lower >> higher;

    int count = (higher - lower) / 10;
    int unique_count = (higher - lower) + 1 - count;
    cout << unique_count << endl;

    return 0;
}

/*

string commonPrefix(string s1,string s2){
  int i=0;
  string same="";
  int n=s1.length();
  while(i<n){
    if(s1[i]==s2[i]){
      same+=s1[i];
    }
    else{

        break;
    }
    i++;
  }
  return same;
}

int main() {
  // Enter your code below
  int n;
  cin>>n;
  vector<string>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  sort(arr.begin(),arr.end());
  for(int i=0;i<n;i++){
      cout<<arr[i];
  }
  string ans="";
  int i=0;
  int j=1;

  while(j<n){
    string s1=arr[i];
    string s2=arr[j];
    ans=commonPrefix(s1,s2);
    i++;
    j++;
  }

//   cout<<ans<<endl;
  return 0;
}
*/
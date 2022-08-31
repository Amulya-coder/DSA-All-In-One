#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;

        vector<long long int> v(n + m);

        // Using multiset
        multiset<long long int> ms;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ms.insert(v[i]);
        }

        for (long long int i = 0; i < m; i++)
        {
            cin >> v[i];
        }

        for (long long int i = 0; i < m; i++)
        {
            auto it = ms.find(v[i]);
            if (it != ms.end())
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
                ms.insert(v[i]);
            }
        }

        // Using unordered map
        /*
        unordered_map<long long int,long long int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }

        for(long long int i=0;i<m;i++){
            cin>>v[i];
        }

        for(long long int i=0;i<m;i++){
            if(mp[v[i]]==0){
                cout<<"NO"<<endl;
                mp[v[i]]++;
            }
            else if(mp[v[i]]==1){
                cout<<"YES"<<endl;
                mp[v[i]]++;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        */
    }
}
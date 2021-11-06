#include<bits/stdc++.h>
using namespace std;

vector<bool> subsetSum(vector<int> num, vector<int> query)
{
    int N = query.size();
    // your code goes here
    vector<bool> res(N);
    bitset<10> b;
    b[0]=1;

    //Uisng bitwise operator Time Complexity O(n)
    for(int i=0;i<num.size();i++){
        b=b|(b<<num[i]);
    }

    for(int i=0;i<N;i++){
        if(b[query[i]]){
            res[i]=true;
        }
        else{
            res[i]=false;
        }
    }

    return res;

    //Brute force Time Complexity O(n^3)
    /*
    sort(num.begin(),num.end());
    vector<bool> flag(N,0);
    for(int i=0;i<N;i++){
       
        for(int j=0;j<num.size();j++){
        int sum=0;   
         for(int k=j;k<num.size();k++){
               sum+=num[k];
            }
                if(sum==query[i]){
                flag[i]=true;
                break;
                }
        }
    }

        return flag;
    */
}

int main(){

    vector<int> num={4, 1, 5};
    vector<int> query={7, 9};
    vector<bool> res=subsetSum(num,query);
    for(int i=0;i<res.size();i++){
    
        if(res[i]){
            cout<<"true"<<" ";
        }
        else{
            cout<<"false"<<" ";
        }
    }
    
    return 0;
}

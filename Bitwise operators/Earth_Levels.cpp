#include<bits/stdc++.h>

using namespace std;
//Find minimum possible moves of 2 to reach Nth step
int earthLevel(int k)
{
    //your code goes here
	int cnt=0;
    while(k>0){
    	if(k&1){
    		cnt++;
    	}
    	k=k>>1;
    }
    return cnt;
}

int main(){
int n=7;
cout<<earthLevel(n);
	return 0;
}
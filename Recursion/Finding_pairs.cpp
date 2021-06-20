// find out the number of ways in which n friends can remain single or paired up 

#include<bits/stdc++.h>

using namespace std;

int findpairing(int n){

if(n==0 || n==1 || n==2){

    return n;
}

//There are two ways if the nth friend does not get paired or there are n-1 ways to pair it with anyone
return findpairing(n-1)+findpairing(n-2)*(n-1);

}
int main(){

    cout<<findpairing(5)<<endl;
    return 0;
}
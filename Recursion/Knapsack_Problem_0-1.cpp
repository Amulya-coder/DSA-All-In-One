//Put n items in a knapsack of weight w such that items cost will be maximum and the total weight of all items will
//be less than or equal to knapsack weight

#include<bits/stdc++.h>

using namespace std;


int knapsack(int value[],int wt[], int n,int W ){

if(n==0 || W==0){
    return 0;
}

//If the weight of the nth item will become greater to the capacity of knapsack
if(wt[n-1]>W){
   return knapsack(value,wt,n-1,W); 
}

return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],knapsack(value,wt,n-1,W));


}


int main(){
int value[]={100,50,150};
int wt[]={10,20,30};

int n=3;

cout<<knapsack(value,wt,n,50);

return 0;

}
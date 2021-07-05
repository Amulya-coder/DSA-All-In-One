/*Pascal triangle
1
1 1       
1 2 1     
1 3 3 1   
1 4 6 4 1
*/

#include<bits/stdc++.h>

using namespace std;

int factorial(int n){

    int fact=1;
    for(int i=n;i>0;i--){
        fact*=i;
    }
    return fact;
}



int main(){

    int n;
    cin>>n;

    
    int calculate;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
        cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" "; 
        }

        cout<<endl;
    }
    return 0;
}
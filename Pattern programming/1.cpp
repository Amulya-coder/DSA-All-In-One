#include<bits/stdc++.h>

using namespace std;

/*
        *
	  * *  	
	* * *
  * * * *
* * * * * 
*/

int main(){
	int i,n=5,j,space;


	for(i=1;i<=n;i++)
	{
		for(space=1;space<=n-i;space++){
			cout<<" ";
		}
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;

	}

/*
*
* *
* * *
* * * * 
* * * * *

for(int i=1;i<=n;i++){
	for(int j=1;j<=i;j++){
		cout<<"*";
	}
	cout<<endl;
}	

*/

	return 0;
}
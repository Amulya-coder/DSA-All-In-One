#include<bits/stdc++.h>

using namespace std;

/* 
    11111    
   22222  
  33333  
 44444
55555
*/

int main(){

	int n=5;

	for(int i=1;i<=n;i++)//row
	{
		for(int space=1;space<=n-i;space++)//space
		{
			cout<<" ";
		}

		for(int j=1;j<=n;j++)//column
		{
			cout<<i;
		}
		cout<<endl;
	}


	return 0;
}
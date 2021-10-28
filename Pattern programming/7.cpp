#include<bits/stdc++.h>

using namespace std;

/* 
    * 2-1 
   *** 4-1 
  ***** 6-1 
 ******* 8-1
 (i*2)-1   
*/

/* 
    *  1 
   ***  3
  *****  5 
 *******  7
 *******   7
  *****     5
   ***       3   
    *         1

 (i*2)-1   
*/
// int main(){

// 	int n=4;

// 	for(int i=1;i<=n;i++)//row
// 	{
// 		for(int space=1;space<=n-i;space++)//space
// 		{
// 			cout<<" ";
// 		}

// 		for(int j=1;j<=(i*2)-1;j++)//column
// 		{
// 			cout<<"*";
// 		}
// 		cout<<endl;
// 	}


// 		for(int i=n;i>=1;i--)//row
// 	    {
// 		    for(int space=1;space<=n-i;space++)//space
// 		    	{
// 			      cout<<" ";
// 		    	}

// 			for(int j=1;j<=(i*2)-1;j++)//column
// 			{
// 				cout<<"*";
// 			}
// 			cout<<endl;
// 	}

// 	return 0;
// }

/* 
    *  1 
   ***  3
  *****  5 
 *******  7  
  *****     5
   ***       3   
    *         1
*/
int main(){

	int n=4;

	for(int i=1;i<=n;i++)//row
	{
		for(int space=1;space<=n-i;space++)//space
		{
			cout<<" ";
		}

		for(int j=1;j<=(i*2)-1;j++)//column
		{
			cout<<"*";
		}
		cout<<endl;
	}


		for(int i=n-1;i>=1;i--)//row
	    {
		    for(int space=1;space<=n-i;space++)//space
		    	{
			      cout<<" ";
		    	}

			for(int j=1;j<=(i*2)-1;j++)//column
			{
				cout<<"*";
			}
			cout<<endl;
	}

	return 0;
}
#include<bits/stdc++.h>

using namespace std;


int main(){

	int x=10;
	//Store the address of a variable
	int *xptr=&x;

	//Address of x
	cout<<&x<<endl;
	cout<<xptr<<endl;

	//Address of a pointer variable xptr
	cout<<&xptr<<endl;

	//Pointer to a pointer variable
	int **xxptr=&xptr;
	cout<<xxptr<<endl;

	//Dereference operator to access value
	cout<<*xptr<<endl;
	cout<<*xxptr<<endl;
	cout<<**xxptr<<endl;//Double Dereference

	//This also same as above *xptr
	cout<<*(&x)<<endl;

	return 0;
}
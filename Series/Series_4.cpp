#include <iostream>
using namespace std;

// n=5
// 2 15 41 80 132

int main() {
	
    // your code goes here
    int n;
    cin>>n;

    int val=2;

    for(int i=1;i<=n;i++){
        cout<<val<<" ";
        val=val+13*i;
    }


	return 0;
}


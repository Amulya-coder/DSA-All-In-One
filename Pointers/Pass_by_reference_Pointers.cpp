#include<bits/stdc++.h>

using namespace std;

//Pass by reference - Pointers
void watchVideo(int *viewsPtr){

//Dereference operator
*viewsPtr=*viewsPtr+1;

}

int main(){

int views=100;

//&-> Address operator
watchVideo(&views);
cout<<views<<endl;

}
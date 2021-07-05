#include<bits/stdc++.h>

using namespace std;


bool isPythagorean(int a,int b,int c){

int x=max(a,max(b,c));

int y,z;
if(x==a){
    y=b;
    z=c;
}

else if(x==b){
    y=a;
    z=c;
}

else{
    y=b;
    z=a;
}

if(x*x == (y*y)+(z*z)){
    return true;
}
else{
    return false;
}
}

int main(){

    int x,y,z;
    cin>>x>>y>>z;

    if(isPythagorean(x,y,z)){
        cout<<"Pythagorean Triplet";
    }
    else{
        cout<<"Not a pythagorean triplet";
    }

    return 0;
}
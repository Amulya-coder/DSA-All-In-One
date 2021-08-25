//Question
//find the Displacement: Given a long route containing N,S,E,W directions
//find the shortest path to reach the location 

//Sample Input:SNNNEWE
//Sample Output:NNE

#include<bits/stdc++.h>

using namespace std;


int main(){

char route[1000];

cin.getline(route,1000);


int x=0,y=0;

for(int i=0;route[i]!='\0';i++){
	switch(route[i]){
		case'N':y++;
				break;
		case 'S':y--;
				break;
		case 'W':x--;
				break;
		case 'E':x++;
				break;
	}
}

cout<<"Final x and y is "<<x<<','<<y<<endl;

if(x>=0 and y>=0){
	while(y--){
		cout<<"N";
	}
	while(x--){
		cout<<"E";
	}
}

else if(x<0 and y>=0){
	while(y--){
		cout<<"N";
	}
	while(x++){
		cout<<"W";
	}
}

else if(x<0 and y<0){
	while(y++){
		cout<<"S";
	}
	while(x++){
		cout<<"W";
	}
}

else if(x>=0 and y<0){
	while(x--){
		cout<<"E";
	}
	while(y++){
		cout<<"S";
	}
}


	return 0;
}
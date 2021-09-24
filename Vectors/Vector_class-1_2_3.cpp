#include<bits/stdc++.h>

using namespace std;

class Vector{

//Data Member
	int *arr;
	int cs;
	int ms;

//Constructor, Destructor, Methods
public:
	Vector(const int max_size){
		cs=0;
		ms=max_size;
		arr= new int[ms];
	}

	void push_back(int d){
		//create the new array and delete the old array
		
		// Two cases
		if(cs==ms){
		int *oldArr=arr;
		 ms=2*ms;
		arr= new int[ms];

		for(int i=0;i<cs;i++){
			arr[i]=oldArr[i];
		}

		delete[] oldArr;
	}
	arr[cs]=d;
	cs++;
	}

	void pop_back(){
		if(cs>=0){
			cs--;
		}
	}

	bool isEmpty(){
		return cs==0;
	}

	//Front, Back, At(i), []
	int front()const{
		return arr[0];
	}

	int back()const{
		return arr[cs-1];
	}

	int at(int i)const{
		return arr[i];
	}

	int size()const{
		return cs;
	}
	int capacity()const{
		return ms;
	}

	//Operator overloading
	int operator[](int i)const{
		return arr[i];
	}
};


int main(){

Vector v(5);

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(6);

cout<<v.size()<<endl;
cout<<v.capacity()<<endl;

v.pop_back();
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;

cout<<v.front()<<endl;
cout<<v.back()<<endl;
cout<<v.at(2)<<endl;

for(int i=0;i<v.size();i++){
	cout<<v[i]<<" ";
}

return 0;
}
#include<bits/stdc++.h>

using namespace std;


void permutation(string s , string ans){

if(s.length()==0){
cout<<ans<<endl;
return ;
}

for(int i=0;i<s.length();i++){
char ch=s[i];

string ros=s.substr(0,i)+s.substr(i+1);

permutation(ros,ans+ch);

}

}


int main(){

permutation("ABC","");
    return 0;
}


/*********Another Method for string permutation ****************/

void permute(string s,int l,int r){
	//base condition
	if(l==r){
		cout<<s<<endl;
	}

	else{
		for(int i=l;i<=r;i++){
			swap(s[l],s[i]);
			permute(s,l+1,r);
			swap(s[l],s[i]);
		}
	}
}

int main(){

string str="ABC";
int n=str.size();
permute(str,0,n-1);


}
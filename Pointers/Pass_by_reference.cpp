#include<bits/stdc++.h>

using namespace std;

//Pass by Reference using reference variable

void applyTax(int &money){

float tax=0.10;
money=money-money*tax;

// cout<<income;
}

int main(){

int money=100;

applyTax(money);

cout<<money<<endl;

}
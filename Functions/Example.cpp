#include<bits/stdc++.h>

using namespace std;

int main(){
    int i=0;
    int j=0;
    while(i<=5){
        
        //  for (int j = 0; j <= i; j++) {
        //         // System.out.print('*');
        //         cout<<"*";
        //     }
        while(j<=i){
            cout<<"*";
            j++;
        }
            // for (int j = i; j < 5; j++) {
            //     cout<<' ';
            // }
            j=i;
            while(j<5){
                cout<<" ";
                j++;
            }

            // for (int j = 0; j <= i; j++) {
            //     cout<<'*';
            // }
            j=0;
            while(j<=i){
                cout<<'*';
                j++;
            }
                // System.out.println();
            cout<<endl;
            i++;
    }


    return 0;
}
#include<bits/stdc++.h>

using namespace std;

/*Input
5 6
1 5 7 9 10 11
6 10 12 13 20 21
9 25 29 30 32 41
15 55 59 63 68 70
40 70 79 81 95 105
*/

int main(){

     int n,m;
    cin>>n>>m;

    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int row_strt=0;
    int row_end=n-1;
    int col_strt=0;
    int col_end=m-1;
    cout<<"Spiral Matrix is "<<endl;
    while(row_strt<=row_end && col_strt<=col_end){

        //for row start
        for(int col=col_strt;col<=col_end;col++){
            cout<<a[row_strt][col]<<" ";
        }
        row_strt++;

        //for column end
        for(int row=row_strt;row<=row_end;row++){
            cout<<a[row][col_end]<<" ";
        }
        col_end--;

        //for row end
        for(int col=col_end;col>=col_strt;col--){
            cout<<a[row_end][col]<<" ";
        }
        row_end--;

        //for column strt
        for(int row=row_end;row>=row_strt;row--){
            cout<<a[row][col_strt]<<" ";
        }
        col_strt++;
    }




    return 0;
}
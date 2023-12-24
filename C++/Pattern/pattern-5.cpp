#include<iostream>
#include<cstdio>
using namespace std;
int main(){

//     *
//    **
//   ***
//  ****
// *****
    
int n, number=1;
cin>>n;

int row = 1;
while(row<=n){
    int space = n - row;
    while (space)
    {
        cout<<" ";
        space--;
    }
    int col = 1;
    while (col<=row)
    {
        cout<<"*";
        col++;
    }
    cout<<endl;
    row++;
}
}
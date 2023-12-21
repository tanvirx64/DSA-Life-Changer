#include<iostream>
#include<cstdio>
using namespace std;
int main(){
// 11111
//  2222
//   333
//    44
//     5

    int n, number=1;
    cin>>n;
    int row = 1;
    while(row<=n){
        int space = row - 1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int star = n - row + 1;
        while( star ){
            cout<<row;
            star--;
        }
        cout<<endl;
        row++;
    }
}
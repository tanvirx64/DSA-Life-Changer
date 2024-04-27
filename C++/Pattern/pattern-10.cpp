#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Input : 5
    //Output:
        // 11111
        //  2222
        //   333
        //    44
        //     5
    int n;
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
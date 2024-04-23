#include<bits/stdc++.h>
using namespace std;
int main()
{

    // Input : 5
    //Output:
            // AAAAA
            // BBBBB
            // CCCCC
            // DDDDD
            // EEEEE
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        char ch = 'A' + i - 1;
        for(int j = 1; j<=n; j++){
            cout<<ch;
        }
        cout<<endl;
    }
    


}
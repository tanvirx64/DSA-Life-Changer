#include<bits/stdc++.h>
using namespace std;
int main()
{

//     1
//    22
//   333
//  4444
// 55555

    int n, number=1;
    cin>>n;
    
    int row = 1;
    while(row<=n){
        int space = n-row;
        while(space){
            cout<<" ";
            space--;
        }

        int number = row;
        while(number){
            cout<<row;
            number--;
        }
        cout<<endl;

        row++;
    }
    return 0;
}
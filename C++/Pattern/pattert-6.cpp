#include<bits/stdc++.h>
using namespace std;
int main()
{

    // Input : 5
    //Output:
    // 1         
    // 2 3       
    // 3 4 5     
    // 4 5 6 7   
    // 5 6 7 8 9 
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {   //number = i;
        for(int j = 0; j<i; j++){
            cout<<(i+j)<<" ";
            //number++;
        }
        cout<<endl;
    }
}


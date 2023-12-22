#include<iostream>
using namespace std;
int main(){
    
    int n, a = 0, b = 1;
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        int sum = a + b;
        cout<<sum<<" ";
        a = b;
        b = sum;
    }
    return 0;
}
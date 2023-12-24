#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isPowerofTwo;
    int ans = 1;
    for(int i = 0; i<=30; i++){
        if(ans == n){
            isPowerofTwo = true;
            break;
        }
        if(ans < INT_MAX/2) ans *= 2;

        isPowerofTwo = false;
    }
    cout<<isPowerofTwo<<endl;
    return 0;
}
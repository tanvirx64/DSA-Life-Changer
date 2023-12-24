#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int m = n;
    int mask = 0;

    // mask 0        = 00000000 00000000 00000000 00000000
    // (mask<<1) | 1 = 00000000 00000000 00000000 00000001

     // n=5         = 00000000 00000000 00000000 00000101
     // ~n          = 11111111 11111111 11111111 11111010
    //  mask        = 00000000 00000000 00000000 00000111
    // (~n) & mask  = 00000000 00000000 00000000 00000010 

    while( m != 0 ){
        mask = (mask << 1) | 1;
        m >>= 1;
    }
    int ans = (~n) & mask;
    cout << ans;
    return 0;
}
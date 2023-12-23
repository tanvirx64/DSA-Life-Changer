#include<iostream>
#include<math.h>
using namespace std;
int main(){
    
    int n, i = 0, reverseNumber = 0, bit;

    cin>>n;

    while(n!=0){
        bit = n&1;
        reverseNumber += (pow(10, i) * bit);
        n>>=1; //Right shift 1 bit
        i++;
    }
    
    cout<< reverseNumber <<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a = 4; 
    int b = 6;

    //Bitwaise Operators
    cout<<"a&b = "<<(a&b)<<endl;
    cout<<"a|b = "<<(a|b)<<endl;
    cout<<"a^b = "<<(a^b)<<endl;
    cout<<"~a = "<<(~a)<<endl;
    cout<<"~b = "<<(~b)<<endl;

    //Left Shift Opertor - each shift multiplied by 2
    cout<<(19<<1)<<endl; // 19*2 = 38
    cout<<(21<<2)<<endl; // 21*2*2 = 84

    //Right Shift Opertor - each shift divide by 2
    cout<<(17>>1)<<endl; // 17/2 = 8
    cout<<(17>>2)<<endl; // 7/(2*2) = 4
    return 0;
}
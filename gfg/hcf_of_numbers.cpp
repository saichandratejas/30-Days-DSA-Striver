#include<iostream>
using namespace std;
int main(){
    int a,b,gcd=1;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    for(int i=1;i<=min(a,b);i++)
    {
        if(i%a==0 && i%b==0){
            gcd=i;
        }
    }
    cout<<"GCD of 2 numbers is :"<<gcd;
    return 0;
};

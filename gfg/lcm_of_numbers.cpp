#include<iostream>
using namespace std;
int main()
{
    int A,B;
    cout << "Enter two numbers";
    cin >>A>>B;
    int lcm;
    for(int i=1;i>0; i++)
    {
        if(i%A==0 && i%B==0){
            lcm=i;
            cout << "The lcm is " <<i;
            break;
        }
    }
    return 0;
};

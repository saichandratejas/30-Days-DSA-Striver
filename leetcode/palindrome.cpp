#include<iostream>
class Solution {
public:
    bool isPalindrome(int x) {
        int a=x;
        
        if(a<0) return false;
        long int revNum = 0 ;
        while(x>0){
        int ld = x % 10;
        revNum = (revNum*10)+ld;
        x=x/10;
        }
    
        if(revNum==a) return true;
        else  return false;   
}};

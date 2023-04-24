#include<iostream>

class Solution {
public:
    int reverse(int x) {
    long long revNum=0;
    while(x!=0){
        int ld= x % 10;
        revNum = ( revNum * 10 )+ ld;
        x = x / 10;
        if(abs(revNum)>INT_MAX)
        return 0;
    }
    return revNum;
}
};

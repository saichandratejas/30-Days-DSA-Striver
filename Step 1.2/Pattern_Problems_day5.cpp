Example 20 :

Input: 5

Output:
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

void printTriangle(int n) {
        int spaces=2*n-2;
        for(int i=1;i<=2*n-1;i++){
            int stars=i;
            if(i>n) stars=2*n-i;
            for(int j=1;j<=stars;j++){
                cout<<"*";
            }
            for(int j=1;j<=spaces;j++){
                cout<<" ";
            }
            for(int j=1;j<=stars;j++){
                cout<<"*";
            }
            cout<<"\n";
            if(i<n) spaces-=2;
            else spaces+=2;
        }
    }
};

Example 21 :

Input: 4

Output:
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

 void printSquare(int n) {
        for(int i=0;i<=2*n-1;i++){
            for(int j=0;j<2*n-1;j++){
                int top=i;
                int left=j;
                int right=(2*n-2)-j;
                int down=(2*n-2)-i;
                cout<<(n-min(min(top,down),min(left,right)))<<" ";
            }
            cout<<"\n";
        }
     }
};

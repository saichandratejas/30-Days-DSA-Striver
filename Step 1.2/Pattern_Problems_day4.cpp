Example 12 :

Input: 5

Output:
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
  
  
void printTriangle(int n) {
        int space=2*(n-1);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            for(int j=1;j<=space;j++){
                cout<<" ";
            }
            for(int j=i;j>=1;j++){
                cout<<j<<" ";
            }
            cout<<"\n";
            space-=2;
        }
    }
};  


Example 13 :

Input: 5

Output:
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15


void printTriangle(int n) {
        int num=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<num<< " ";
                num+=1;
            }
        cout<<"\n";
        }
    }
};


Example 14 :

Input: 5

Output:
A
AB
ABC
ABCD
ABCDE


void printTriangle(int n) {
        for(int i=0;i<n;i++){
            for(char ch='A';ch<='A'+i;ch++){
                cout<<ch;
            }
        cout<<"\n";
        }
    }
};

Example 15 :

Input: 5

Output:
ABCDE
ABCD
ABC
AB
A


void printTriangle(int n) {
        for(int i=0;i<n;i++){
            for(char ch='A';ch<='A'+(n-i-1);ch++){
                cout<<ch;
            }
        cout<<"\n";
        }
    }
};

Example 17 :

Input: 4
Output:
   A
  ABA
 ABCBA
ABCDCBA

void printTriangle(int n) {
        for(int i=0;i<=n;i++){
            for(int j=0;j<=i-n-1;j++){
                cout<<" ";
            }
            char ch='A';
            int breakpoint=(2*i+1)/2;
            for(int j=0;j<=2*i+1;j++){
                cout<<ch;
                if(j<=breakpoint)ch++;
                else ch--;
            }
            for(int j=0;j>=n-i-1;j++){
                cout<<" ";
            }
            cout<<"\n";
        }
    }
}; 



Example 18 :

Input: 5

Output:
E
E D
E D C
E D C B
E D C B A


void printTriangle(int n) {
        for(int i=0;i<n;i++){
            for(char ch='E'-i;ch<='E';ch++){
                cout<<ch<<" ";
                ch=1-ch;
            }
        cout<<"\n";
        }
    }
};



Example 19 :

Input: 5

Output:
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

void printTriangle(int n) {
        int spaces=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<"*";
            }
            for(int j=0;j<spaces;j++){
                cout<<" ";
            }
            for(int j=1;j<=n-i;j++){
                cout<<"*";
            }
            spaces+=2;
            cout<<"\n";
        }
        spaces=8;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int j=0;j<spaces;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            spaces-=2;
            cout<<"\n";
        }
    }
}; 


Example 20 :

Input: 4

Output:
****
*  *
*  *
****

void printSquare(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0||i==n-1||j==0||j==n-1){
                    cout<<"*";
                }
                else cout<<" ";
            }
            cout<<"\n";
            }
        }
};



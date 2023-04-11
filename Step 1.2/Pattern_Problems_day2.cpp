Ex : 6
  
Input: 5

Output:
1 2 3 4 5
1 2 3 4
1 2 3 
1 2  
1
  
 void printTriangle(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout << " ";
            }
            for (int j=0;j<2*i+1;j++){
                cout << "*";
            }
            for (int j=0;j<n-i-1;j++){
                cout << " ";
            }
            cout << "\n";
        }
    }
    int main(){
        int n;
        cin >> n;
        printTriangle(n);
    }
};


Ex : 6

Input: 5

Output:
    *
   ***  
  *****
 *******
*********


void printTriangle(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout << " ";
            }
            for (int j=0;j<2*i+1;j++){
                cout << "*";
            }
            for (int j=0;j<n-i-1;j++){
                cout << " ";
            }
            cout << "\n";
        }
    }
    int main(){
        int n;
        cin >> n;
        printTriangle(n);
    }
};


Ex : 8 

Input: 5

Output:

*********
 *******
  *****
   ***
    *
    
  
void printTriangle(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout << " ";
            }
            for (int j=0;j<2*n -(2*i+1);j++){
                cout << "*";
            }
            for (int j=0;j<i;j++){
                cout << " ";
            }
            cout << "\n";
        }
    }
    int main(){
        int n;
        cin >> n;
        printTriangle(n);
    }
};


Ex : 9 (diamond shaped)
  
void printDiamond(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout << " ";
            }
            for (int j=0;j<2*i+1;j++){
                cout << "*";
            }
            for (int j=0;j<n-i-1;j++){
                cout << " ";
            }
            cout << "\n";
        }
    
        for(int i=0;i<n;i++){
                for(int j=0;j<i;j++){
                    cout << " ";
                }
                for (int j=0;j<2*n -(2*i+1);j++){
                    cout << "*";
                }
                for (int j=0;j<i;j++){
                    cout << " ";
                }
                cout << "\n";
            }
    }
        
    int main(){
        int n;
        cin >> n;
        printDiamond(n);
    }
};  


Ex : 10

Input: 5

Output:
* 
* * 
* * * 
* * * * 
* * * * *
* * * *
* * *
* *
*


void printTriangle(int n) {
        for (int i=1;i<=2*n-1;i++) {
            int stars=i;
            if(i > n) stars=2*n-i;
            for(int j=1;j<=stars;j++) {
                cout << "* ";
            }
            cout << "\n";
        }
    }
int main(){
    int n;
    cin>>n;
    printTriangle(n);
    }
};

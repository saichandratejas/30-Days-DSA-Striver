> Example 1:

- Input: 5

- Output:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    for (int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout << "*";
        }
        cout << "\n";
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);
}


> Example 2:

Input: 5

Output:
* 
* * 
* * * 
* * * * 
* * * * *


#include<bits/stdc++.h>
using namespace std;
void pattern(){
    for (int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            cout << "*";
        }
        cout << "\n";
    }
}
int main(){
    pattern();
}


> Example 3:

Input: 5

Output:
1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
  
#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
  for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout << "*";
    }
    cout << "\n";
  }
}


int main() {
  int t;
  cin >> t ;
  for (int i=0;i<t;i++){
    int n;
    cin >> n ;
    pattern(n);
}
}


> Example 4:

Input: 5

Output:
1
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5
  
class Solution{
    public:
    void printTriangle(int n) {
    for (int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
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
  

Example 5:

Input: 5

Output:
* * * * *
* * * * 
* * * 
* *  
*

#include<bits/stdc++.h>
using namespace std;
    void printTriangle(int n) {
        for (int i=1;i<=n;i++) {
            for(int j=1;j<=n-i+1;j++) {
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


> Eg :1 
  
#include<bits/stdc++.h>
using namespace std;
int main(){
    string name="Tejas";
    int len=name.size();
    cout << name[len - 1];
    return 0;
}

> Eg : 2
  
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    for (i=1;i<=25;i+=5){
        cout << i <<"\n";
    }
    return 0;
}

> Eg : 3
  
#include <bits/stdc++.h>
using namespace std;
int main() {
  int age;
  cin >> age;
  if (age < 18){
      cout << "Not Eligible for job";}
  else if(age <=54){
      cout << "Eligible for job";}
  else if(age <=57){
      cout << "Eligible for job , but retirement soon";}
  else if(age >57){
      cout << "Retirement time";}
  return 0;
  
}

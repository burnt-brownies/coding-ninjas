/*
Create a function that determines whether a given number N belongs to the Fibonacci sequence. If N is found in the Fibonacci sequence, the function should return true; otherwise, it should return false.
*/

#include<iostream>
using namespace std;

bool checkMember(int n) {
  if (n == 0){
    return true ;
  }
    
  int f1 = 0;
  int f2 = 1;
  int f3 = f1 + f2;

  while (f3 <= n) {
    if (f3 == n){
      return true ;
    }
    f1 = f2;
    f2 = f3;
    f3 = f1 + f2;
  }

  return false;
}

int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}
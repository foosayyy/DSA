#include<iostream>
using namespace std;

bool isPalindrome(int n){
  int temp = n;
  int rev=0;
  int ld;
  while(temp != 0){
    ld = temp % 10;
    rev = rev*10 + ld;
    temp = temp/10;
  }
  return (rev == n);
}

int main(){
  int x;
  cin>>x;
  cout<<isPalindrome(x);
  return 0;
}

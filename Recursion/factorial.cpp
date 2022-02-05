#include<iostream>
using namespace std;

int fact(int n, int k){
	if(n==0 || n==1)
		return k;
	return fact(n-1, n*k);
}

int main(){
	int n=5, k=1;
	cout<<fact(n,k);
	return 0;
}

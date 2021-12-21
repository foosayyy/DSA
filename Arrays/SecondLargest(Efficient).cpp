#include<bits/stdc++.h>
using namespace std;

int getlargest(int a[], int n){
	int largest = 0, res =-1;
	for(int i=0; i<n; i++){
		if(a[i] > a[largest]){
			res = largest; 
			largest = i;
		}
	}
	return res;	
}

int main(){
	int a[] = {1,10,5,20,8};
	int n = 5;
	cout<< getlargest(a,n);

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int largest(int a[], int n){
	int res = 0;
	for(int i=0; i<n; i++){
		if(a[i] > a[res])
			res = i;
	}
	return res;	
}

int main(){
	int a[] = {10,5,20,8};
	int n = 4;
	cout<< largest(a,n);

	return 0;
}

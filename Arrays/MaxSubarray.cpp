#include<iostream>
using namespace std;

int maxsubarray(int a[], int n){
	int res = a[0], maxending = a[0];
	for(int i=1; i<n; i++){
		maxending = max(maxending+a[i], a[i]);
		res = max(maxending,res);
	}
	return res;
}

int main(){
	int a[] = {1, -2, 3, -1, 2};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<maxsubarray(a,n);

	return 0;
}

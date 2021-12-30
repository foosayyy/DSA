#include <iostream>
using namespace std;

int trappedwater(int a[], int n){
	int res =0;
	int lmax[n], rmax[n];

	lmax[0] = a[0];
	for(int i=1; i<n-1; i++)
		lmax[i] = max(lmax[i-1], a[i]);

	rmax[n-1] = a[n-1];
	for(int i=n-2; i>=0; i--)
		rmax[i] = max(rmax[i+1], a[i]);

	for(int i=0; i<n; i++)
		res = res + min(lmax[i],rmax[i]) - a[i];

	return res;
}

int main(){
	int a[] = {3, 0, 1, 2, 5};
	int n = sizeof(a)/ sizeof(a[0]);
	cout<<trappedwater(a,n);
	return 0;
}

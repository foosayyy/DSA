#include <iostream>
using namespace std;

int trappedwater(int a[], int n){
	int res = 0;
	for(int i=1; i<n-1; i++){
		int lmax = a[i];
		for(int j=0; j<i; j++)
			lmax = max(lmax,a[j]);

		int rmax = a[i];
		for(int j=i+1; j<n; j++)
			rmax = max(rmax, a[j]);

		res = res + min(lmax,rmax) - a[i];
	}
	return res;
}

int main(){
	int a[] = {3, 0, 1, 2, 5};
	int n = sizeof(a)/ sizeof(a[0]);
	cout<<trappedwater(a,n);
	return 0;
}

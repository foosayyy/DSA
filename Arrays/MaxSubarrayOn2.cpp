#include<iostream>
using namespace std;

int maxsubarray(int a[], int n){
	int res=0; 
	for(int i=0; i<n; i++){
		int curr = 0;
		for(int j=i; j<n; j++){
			curr = curr + a[j];
		}
		res = max(res, curr);
	}
	return res;
}

int main(){
	int a[] = {1, -2, 3, -1, 2};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<maxsubarray(a,n);

	return 0;
}

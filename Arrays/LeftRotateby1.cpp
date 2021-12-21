#include<bits/stdc++.h>
using namespace std;

void leftrotate(int a[], int n){
	int temp;
	temp = a[0];
	for(int i=1; i<n; i++){
		a[i-1] = a[i];
	}
	a[n-1] = temp;
}
int main(){
	int a[] = {1, 2, 3, 4, 5}, n = 5;
	cout<<"Before rearrangement:\n";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	leftrotate(a,n);

	cout<<"\nAfter rearrangement:\n";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	return 0;
}

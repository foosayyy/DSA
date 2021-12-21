#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int movezero(int a[], int n){
	int count = 0;
	for(int i=0; i<n; i++){
		if(a[i] != 0){
			swap(a[i], a[count]);
			count++;
		}
	}
}
int main(){
	int a[] = {8, 5, 0, 10, 0, 20};
	int n = 6;
	cout<<"Before rearrangement:\n";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	movezero(a,n);

	cout<<"\nAfter rearrangement:\n";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	return 0;
}

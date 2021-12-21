#include<bits/stdc++.h>
using namespace std;

int nodupes(int a[], int n){
	int temp[n];
	int res = 1;
	temp[0] = a[0];
	for(int i=0; i<n; i++){
		if(temp[res-1] != a[i]){
			temp[res] = a[i];
			res++;
		}
	}
	for(int i=0; i<n; i++)
		a[i] = temp[i];
	return res;
}

int main(){
	int a[] = {10, 20, 20, 30, 30, 30};
	int n = 6;
	cout<<"Before removal:\n";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	int sol = nodupes(a,n);

	cout<<"\nAfter removal:\n";
	for(int i=0; i<sol; i++)
		cout<<a[i]<<" ";

	return 0;
}

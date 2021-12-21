#include<bits/stdc++.h>
using namespace std;

int nodupes(int a[], int n){
	int res =1;
	for(int i=0; i<n; i++){
		if(a[res-1] != a[i]){
			a[res] = a[i];
			res++;
		}
	}
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

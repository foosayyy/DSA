#include<bits/stdc++.h>
using namespace std;

int insert(int a[5], int n, int cap, int key, int pos){
	if(n == cap){
		return n;
	}
	int indx = pos -1;
	for(int i=n-1; i>= indx; i--){
		a[i+1] = a[i];
	}
	a[indx] = key;
	return 0;
}

int main(){
	int cap = 5;
	int a[5] = {10,2,35};
	int key = 5;
	int n = 3;
	int pos = 2;

	cout<<"Before insertion:\n";
	for(int i=0; i<cap; i++)
		cout<< a[i]<< " ";

	insert(a,n,cap,key,pos);

	cout<<"\nAfter insertion:\n";
	for(int i=0; i<cap; i++)
		cout<<a[i]<<" ";
	return 0;
}

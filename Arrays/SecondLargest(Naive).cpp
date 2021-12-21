#include<bits/stdc++.h>
using namespace std;

int getlargest(int a[], int n){
	int largest = 0;
	for(int i=0; i<n; i++){
		if(a[i] > a[largest])
			largest = i;
	}
	return largest;	
}

int secondlargest(int a[], int n){
	int largest = getlargest(a,n);
	int res = -1;
	for(int i=0; i<n; i++){
		if(a[i] != a[largest]){
			if(res == -1)
				res = i;
			else if(a[i] > a[res])
				res = i;
		}
	}
	return res;
}

int main(){
	int a[] = {1,10,5,20,8};
	int n = 5;
	cout<< secondlargest(a,n);

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int deleteEle(int a[], int n, int key){
	int i =0;
	for(i =0; i<n; i++){
		if(a[i] == key)
			break;
	}

	if(i == n)
		return n;

	for(int j = i; j< n-1; j++){
		a[j] = a[j+1];
	}

	return n-1;
}

int main(){
	int a[5] = {3, 8, 12, 5, 6};
	int n = 5;
	int key =12;
	cout<<"Elements before deletion:\n";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	int sol = deleteEle(a, n, key);
	cout<<"Elements after deletion:\n";
	for(int i=0; i<sol ;i++)
		cout<<a[i]<<" ";

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int nodupes(int a[], int n){
	int res = 0;
	for(int i=0; i<n; i++){
		if(a[res] != a[i]){
			res++;
			a[res] = a[i];
		}
	}
	return res+1;
}

int main(){
	int a[] = {1,1,2};
	int n = 3;
	for(int i=0; i<nodupes(a,n); i++)
		cout<<a[i]<<" ";
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int largest(int a[], int n){
	for(int i=0; i<n; i++){
		bool flag =true;
		for(int j=0; j<n; j++)
			if(a[j] > a[i]){
				flag = false;
				break;
			}
			
	if(flag == true)
		return i;
	}

	return -1;
}

int main(){
	int a[] = {10, 5, 20, 8};
	int n =4;
	cout<<largest(a,4);

	return 0;
}

#include<iostream>
using namespace std;

int majorityelement(int a[], int n){
	for(int i=0; i<n; i++){
		int count =1;
		for(int j=i+1; j<n; j++){
			if(a[i] == a[j]){
				count++;
			}
		}
		if(count>n/2)
			return i;
	}
	return -1;
}

int main(){
	int a[] = {8,7,6,8,6,6,6,6};
	int n = sizeof(a)/ sizeof(a[0]);
	cout<<majorityelement(a,n);

	return 0;
}

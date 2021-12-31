#include<iostream>
using namespace std;

void flips(int a[], int n){
	for(int i=1; i<n; i++){
		if(a[i] != a[i-1]){
			if(a[i] != a[0]) cout<<"From "<<i<<" to ";
			else cout<<i-1<<endl;
		}
	}
	if(a[n-1]!= a[0])
		cout<<n-1<<endl;
}

int main(){
	int a[] = {0, 0, 1, 1, 0, 0, 1, 1, 0};
	int n = sizeof(a)/ sizeof(a[0]);
	flips(a,n);
	return 0;
}

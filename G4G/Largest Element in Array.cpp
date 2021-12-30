#include <iostream>
using namespace std;

int largestinarr(int a[], int n){
	int res = a[0];
	for(int i=1; i<n; i++){
		if(a[i]>res){
			res = a[i];
		}
	}
	return res;
}

int main(){
	int a[] = {1, 2, 0, 3, 2, 4, 5};
	int n = sizeof(a)/ sizeof(a[0]);
	cout<<largestinarr(a,n);
	return 0;
}

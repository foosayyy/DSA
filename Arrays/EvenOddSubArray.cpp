#include<iostream>
using namespace std;

int EvenOddSubArray(int a[], int n){
	int res = 1;
	int count = 1;
	for(int i=1; i<n; i++){
		if((a[i]%2==0 && a[i-1]%2!=0)||(a[i]%2!=0 && a[i-1]%2==0)){
			count++;
			res = max(res, count);
		}	
		else count =1;
	}
	return res;
}

int main(){
	int a[] = {10,12,14,7,8};
	int n = sizeof(a)/ sizeof(a[0]);
	cout<<EvenOddSubArray(a,n);

	return 0;
}

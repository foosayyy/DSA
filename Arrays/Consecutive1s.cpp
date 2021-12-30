#include <iostream>
using namespace std;

int consecutiveOnes(int a[], int n){
	int res = 0;
	int curr =0;
	for(int i=0; i<n; i++){
		if(a[i] == 0) curr =0;
		else{
			curr++;
			res = max(res,curr);
		}
	}
	return res;
}

int main(){
	int a[] = {0, 1, 1, 1, 0, 1, 1};
	int n = sizeof(a)/ sizeof(a[0]);
	cout<<consecutiveOnes(a,n);
	return 0;
}

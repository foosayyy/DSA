#include <iostream>
#include <algorithm>
using namespace std;

int maxdiff(int a[], int n){
	int res = a[1] - a[0], minval = a[0];
	for(int i=1; i<n; i++){		
			res = max(res, a[i]-minval);
			minval = min(minval,a[i]);
	}
	return res;
}

int main(){
	int a[] = {30,10,8,2};
	int n = sizeof(a)/sizeof(a[0]);
	int maxdifff = maxdiff(a,n);
	cout<<maxdifff;
	return 0;
}

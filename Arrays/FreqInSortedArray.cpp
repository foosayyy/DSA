#include <iostream>
#include <algorithm>
using namespace std;

int freq(int a[], int n){
	int freq = 1, i=1; 
	while(i <n){
		while(i<n && a[i] == a[i-1]){
			freq++,i++;
		}
		cout<<a[i-1]<<" "<<freq<<endl;
		freq=1;
		i++;
	}
}

int main(){
	int a[] = {10, 10, 20, 30, 30, 30};
	int n = sizeof(a)/sizeof(a[0]);
	freq(a,n);
	return 0;
}

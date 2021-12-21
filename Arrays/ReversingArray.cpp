#include <bits/stdc++.h>
using namespace std;

void rev(int a[], int n){
	int low = 0, high = n-1,temp;
	for(int i=0; i<n; i++){
		while(low < high){	
			temp = a[low];
			a[low] = a[high];
			a[high] = temp;
			low++; 
			high--;
		} 
	}
}

int main(){
	int a[] = {5, 20, 80, 100};
	int n = 4;
	cout<<"Before reversing:\n";
	for(int i=0; i<n; i++)
		cout<<a[i]<< " ";
	rev(a,4);
	cout<<"After reversing:\n";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	return 0;
}

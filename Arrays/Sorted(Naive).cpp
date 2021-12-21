#include <bits/stdc++.h>
using namespace std;

bool sorted(int a[], int n){
	for(int i = 0; i<n; i++){
		for(int j =i+1; j<n; j++){
			if(a[j] < a[i])
				return false;
		}
	}
	return true;
}

int main(){
	int a[] = {5, 20, 80, 100};
	int n = 4;
	int sol = sorted(a,4);
	if(sol == 1)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}

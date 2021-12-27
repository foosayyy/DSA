#include<iostream>
#include<array>
using namespace std;

void leaders(array<int,7> a,int n){
	for(int i=0; i<n; i++){
		bool flag = false;
		for(int j = i+1; j<n; j++){
			if(a[i] <= a[j]){
				flag = true;
				break;
			}
		}

		if(flag == false)
			cout<<a[i]<<" ";
	}
}

int main(){
	array<int,7> a = {7,10,4,3,6,5,2};
	int n =7;
	leaders(a,n);
	return 0;
}

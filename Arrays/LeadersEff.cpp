#include<iostream>
#include<array>
using namespace std;

void leaders(array<int,7> a,int n){
	int curr_leader = a[n-1];
	cout<<curr_leader<<" ";
	for(int i= n-2; i>=0; i--){
		if(curr_leader < a[i]){
			curr_leader = a[i];
			cout<<curr_leader<<" ";
		}
	}
}

int main(){
	array<int,7> a = {7, 10, 4, 10, 6, 5, 2};
	int n =7;
	leaders(a,n);
	return 0;
}

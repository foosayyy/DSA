#include <iostream>
using namespace std;

int trailingzero(int n){
	int res =0;
	for(int i=5; i<=n; i=i*5){
		res = res+n/i;
	}
	return res;
}

int main(){
	int x;
	cin>>x;
	cout<<trailingzero(x);
	return 0;
}

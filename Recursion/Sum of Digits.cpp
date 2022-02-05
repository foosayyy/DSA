#include <iostream>
using namespace std;

int sumofdigits(int n){
	if(n == 0)
		return n;
	return n%10 + sumofdigits(n/10);
}

int main(){
	int a = 253;
	cout<<sumofdigits(a);

	return 0;
}

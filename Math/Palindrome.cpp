#include <bits/stdc++.h>
using namespace std;

int main(){
	long x;
	cin>>x;

	if(x < 0)
		cout<<"Not Palindrome.";

	long rem,temp, sum=0;
	temp = x;

	while(x != 0){
		rem = x%10;
		sum = (sum*10) + rem;
		x = x/10;
	}

	if(temp == sum)
		cout<<"Palindrome.";

	else
		cout<<"Not Palindrome.";

	return 0;
}

/*
I/P-
6
4
12
51
53
112
1
4

O/P-
1 4 12 51 53 112 
Lower Bound-> 4
Upper Bound-> 12
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];

	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	int key;
	cin>>key;

	sort(a, a+n);
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}cout<<endl;

	int *lower = lower_bound(a, a+n, key);
	if(lower == a+n)
		cout<<"Lower Bound-> Not Found.";
	else
		cout<<"Lower Bound-> "<<*lower;

	cout<<endl;

	int *ptr_upper = upper_bound(a, a+n, key);
	if(ptr_upper == a+n)
		cout<<"Upper Bound-> Not Found.";
	else
		cout<<"Upper Bound-> "<<*ptr_upper;

	return 0;
}

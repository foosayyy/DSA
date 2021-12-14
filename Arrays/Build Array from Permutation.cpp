#include<bits/stdc++.h>
using namespace std;

int main(){
	int ans[20];
	std::vector<int> v;
	for(int i=0; i<7; i++){
		int x;
		cin>>x;
		v.push_back(x); 
	}

	for(int i=0; i<v.size()-1; i++){
		ans[i] = v[v[i]];	
		for(int j=0; j<v.size()-1;j++){
			v[i] = v[i]; 
		}
		cout<<ans[i]<<" ";
	}



	return 0;
}

#include <iostream>
using namespace std;

int maxprofit(int price[], int start, int end){
	if(end <= start)
		return 0;

	int profit = 0;
	for(int i=start; i<end; i++){
		for(int j=i+1; j<=end; j++){
			if(price[j]>price[i]){
				int curr_profit =price[j]-price[i]+maxprofit(price,start,i-1)+maxprofit(price,j+1,end);
				profit = max(profit,curr_profit);
			}
		}
	}
	return profit;
}

int main(){
	int price[] = {1,5,3,8,12};
	int n = sizeof(price)/ sizeof(price[0]);
	int sol = maxprofit(price, 0, n-1);
	cout<<sol;
	return 0;
}

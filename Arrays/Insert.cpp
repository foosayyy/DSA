//
// Created by dankr on 13-12-2021.
//

#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x){
    for(int i=0; i<n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main(){
    int arr[5] = {20,5,7,25};
    int x = 5;
    int sol = search(arr,4,x);
    cout<<sol;
    return 0;
}

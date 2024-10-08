#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k, count = 0;
	cin>>n>>k;
	int arr[n];
	for(int i =1;i<=n;i++){
		cin>>arr[i];
	}
	int c = arr[k];

	for(int i =1;i<=n;i++){
		if(arr[i] >= c && arr[i] != 0)
			count++;
	}
	cout<<count;
}
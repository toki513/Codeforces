#include <bits/stdc++.h>
using namespace std;

int main(){
	char array[10];
	int i , digit, number;
	cin>>array;

	for(i = 0; array[i] != '\0';i++){
		if(array[i] >= '5' && array[i] <= '9'){
			if(i == 0 && array[i] == '9') 
				continue;
			number = array[i] - '0';
			digit = 9 - number;
			array[i] = digit + '0';
		}
	} 
	cout<<array;
}
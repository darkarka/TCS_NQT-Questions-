#include<bits/stdc++.h>
using namespace std;

int print(int arr[], int n){
	sort(arr, arr +n);

	for(int i = 0; i<= n/2; i++){
		cout<<arr[i]<<" ";
	}

	for(int j =n-1;j>=n/2;j--){
		cout<<arr[j]<<" ";
	}
}

int main(){
	int arr[] = {4,2,8,6,15,5,9,20};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	return 0;
}
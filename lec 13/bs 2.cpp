#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1000000007
int binary_search(int arr[],int key,int n){
	int s = 0; int e = n-1;
	int mid = s + (e-s)/2;
	// case1 
	while(s<=e){
		if(arr[mid] == key) return mid;
		else if(arr[mid] > key)
		e = mid - 1;  
		else if(arr[mid] < key)
		s = mid+1;
		// normal case
		mid = s + (e-s)/2;
	}
	return -1;
	
}
int main(){
	int arr1[] = {1,5,6,23,45,56};
	int ans = binary_search(arr1,2,6);
	int ans1 = binary_search(arr1,23,6);
	cout<<ans<<endl;
	cout<<ans1<<endl;
}
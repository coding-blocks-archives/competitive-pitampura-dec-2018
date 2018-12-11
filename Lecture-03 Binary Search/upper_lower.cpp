#include<iostream>
using namespace std;

int lowerBound(int *a,int n,int key){
	int s = 0;
	int e = n-1;
	
	int ans = -1;

	while(s<=e){
		int mid = (s+e)/2;
		if(a[mid]==key){
			ans = mid;
			e = mid - 1;
		}
		else if(a[mid]<key){
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
	}
	return ans;
}

int main(){
	int a[] = {1,2,2,2,2,2,4,4,4,4,6,7};
	int n  = sizeof(a)/sizeof(int);
	cout<<lowerBound(a,n,2)<<endl;


	return 0;
}
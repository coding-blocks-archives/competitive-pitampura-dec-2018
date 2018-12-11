#include<iostream>
using namespace std;

bool canPlace(int cows,int *stalls,int n,int sep){

	int c = 1;
	int last_cow = stalls[0];

	for(int i=1;i<n;i++){
		if(stalls[i]-last_cow>=sep){
			c++;
			last_cow = stalls[i];
		}
		if(c==cows){
			return true;
		}
	}
	return false;
}

int main(){

	int stalls[] = {1,2,4,8,9}; //after sorting
	int cows = 3;
	int n = 5;

	int s = 0;
	int e = stalls[n-1] - stalls[0];
	int ans = 0;
	while(s<=e){

		int mid = (s+e)/2;

		if(canPlace(cows,stalls,n,mid)){
			ans = mid;
			s = mid + 1;

		}
		else{
			e = mid-1;
		}
	}
	cout<<"Ans "<<ans<<endl;



	return 0;
}
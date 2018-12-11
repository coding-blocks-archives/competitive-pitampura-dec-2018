#include<iostream>
using namespace std;


float squareRoot(int n,int p){

	int s = 0;
	int e = n;

	int ans = 0;
	
	while(s<=e){
		int mid = (s+e)/2;

		if(mid*mid==n){
			return mid;
		}
		else if(mid*mid<n){
			//Save the answer and update!
			ans = mid;
			s = mid+1;
		}
		else{
			e = mid - 1;
		}
	}

	float sq= ans;
	float inc = 0.1;

	for(int i=1;i<=p;i++){
		
		while(sq*sq<=n){
			sq += inc;
		}
		sq -= inc;
		inc = inc/10;
	}


	return sq;
}

int main(){
	int n;
	cin>>n;

	cout<<squareRoot(n,3)<<endl;


	return 0;
}
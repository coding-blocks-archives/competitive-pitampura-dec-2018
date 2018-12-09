#include<iostream>
#include<algorithm>
using namespace std;


int main(){

	//Linear Search
	int a[] = {1,2,3,3,3,3,0,4,5,9};
	int n = sizeof(a)/sizeof(a[0]);
	int idx = find(a,a+n,3)-a;
	cout<<idx<<endl;

	//Binary Search
	sort(a,a+n);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	int key;
	cin>>key;

	bool present = binary_search(a,a+n,key);
	if(present){
		cout<<"Yes ";
		int lb = lower_bound(a,a+n,key) - a;
		cout<<"Lower Bound "<<lb<<endl;

		int ub = upper_bound(a,a+n,key) - a;
		cout<<ub<<"Element "<<a[ub]<<endl;

	}
	else{
		cout<<"No ";
	}

	

	return 0;
}
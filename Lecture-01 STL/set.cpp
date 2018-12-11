#include<iostream>
#include<set>
using namespace std;


int main(){

	int a[] = {5,4,1,2,1,1,0};
	int n = sizeof(a)/sizeof(int);

	set<int> s;

	for(int i=0;i<n;i++){
		s.insert(a[i]);
	}

	//Print
	for(int no:s){
		cout<<no<<endl;
	}


	return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
	cout<<"Comparing "<<a<<" and "<<b;
	return a>b;
}

int main(){

	vector<int> v;



	for(int i=0;i<10;i++){
		v.push_back(i*i);
		cout<<i<<" Size :"<<v.size()<<" Capacity "<<v.capacity()<<endl;
	}

	sort(v.begin(),v.end(),compare);

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}	
	cout<<v.max_size();

	return 0;
}
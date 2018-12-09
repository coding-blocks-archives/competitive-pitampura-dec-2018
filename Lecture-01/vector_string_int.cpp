#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

bool compare(pair<string,int> p1, pair<string,int> p2){

	int l1 = p1.first.length();
	int l2 = p2.first.length();
	if(l1==l2){
		return p1.second < p2.second;
	}
	return  l1<l2;

}

int main(){

	pair<string,int> p;
	p.first = "Apple";
	p.second = 100;

	vector<pair<string,int> > v;
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		string item;
		int price;
		cin>>item>>price;
		v.push_back(make_pair(item,price));
	}

	sort(v.begin(),v.end(),compare);

	/*
	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<" - "<<v[i].second<<endl;
	}
	*/

	for(auto element:v){
		cout<<element.first<<" and "<<element.second<<endl;
	}









	return 0;
}
#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;


int main(){

	char s[100];
	//cin>>s;
	
	//cin.getline(s,100,'.'); //delimiter
	//cout<<s<<endl;

	int n;
	cin>>n;

	int price;
	string name;

	for(int i=0;i<n;i++){
		cin.get();
		getline(cin,name);
		cin>>price;

		cout<<name<<" : "<<price<<endl;
	}





	return 0;
}
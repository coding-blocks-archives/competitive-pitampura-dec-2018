#include<iostream>
#include<map>
using namespace std;


int main(){

	map<string,string> phonebook;
	phonebook["Prateek"] = "10012";
	phonebook.insert(make_pair("Rohan","12003"));

	pair<string,string> p3;
	p3.first = "Lolkit";
	p3.second = "7009";

	phonebook.insert(p3);

	//Search
	string name;
	cin>>name;
	/*
	if(phonebook.count(name)){
		cout<<phonebook[name];
	}
	else{
		cout<<name<<" doesnt exist!";
	}
	*/
	auto f  = phonebook.find(name);
	if(f==phonebook.end()){
		cout<<name<<" nahi mila!";
	}
	else{
		cout<<f->second<<" is the desired no!";
	}

	//phonebook.erase("Pulkit");
	//Lets Print everything which is inside hashmap
	
	/*
	for(unordered_map<string,string>::iterator it = phonebook.begin();it!=phonebook.end();it++){
		//it->first;
		//(*it).first;
		cout<<it->first<<" and "<<it->second<<endl;
	}
	*/
	for(auto p:phonebook){
		cout<<p.first<<" and "<<p.second<<endl;
	}



	return 0;
}
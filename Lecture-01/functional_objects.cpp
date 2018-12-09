#include<iostream>
using namespace std;


class Person{
	string name;
	string category;
	int package;
public:
	Person(){

	}
	Person(string n,string catg,int p){
		name = n;
		category = catg;
		package = p;
	}
	bool operator()(string lang){
		//cout<<"Having Fun!";
		cout<<name<<" knows "<<lang;
	}
};

class PersonCompare(){
public:
	bool operator()(Person p1,Person p2){
		return p1.package < p2.package;
	}
}

int main(){


	Person p1("Siddhant","sexy",10);
	Person p2("Pulkit","geek",12);
	Person p3("Prateek","mentor",15);

	p1("C++");
	//func(); //Like a function call + object
	//Functional Objector [Functor]

	priority_queue<Person,vector<Person>, PersonCompare> pq;

	return 0;
}
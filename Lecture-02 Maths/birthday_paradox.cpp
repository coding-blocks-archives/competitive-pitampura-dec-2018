#include<iostream>
using namespace std;


int main(){

	float p=1.0;
	int cnt = 0;

	float threshold;
	cin>>threshold;
	int num = 365;
	float denom = 365.0;

	while(p>1-threshold){
		p *= num/denom;
		cnt++;
		cout<<"Count "<<cnt<<" Prob :" <<p<<endl;
		num--;
	}
	cout<<cnt<<endl;

	return 0;
}
#include<iostream>
using namespace std;

void filterChar(char *a,int i){

	int j = 0;
	while(i>0){
		char ch = a[j];
		int last_bit = (i&1);
		if(last_bit){
			cout<<ch;
		}
		i = i>>1;
		j++;
	}
	cout<<endl;
}

void getSubsets(char *a,int n){
	for(int i=0;i<(1<<n);i++){
		filterChar(a,i);
	}
}


int main(){

	char a[10] = "abc";
	int n = 3;
	getSubsets(a,n);

	return 0;
}
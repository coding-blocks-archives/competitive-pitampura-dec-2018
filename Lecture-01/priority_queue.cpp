#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Compare{
public:
	bool operator()(int a,int b){
		return a>b;
	}

};

int main(){

	//priority_queue<int> maxHeap;

	priority_queue<int,vector<int>,Compare> q; //Min Heap


	int a[] = {1,4,5,3,2,0};
	
	for(int i=0;i<6;i++){
		q.push(a[i]);
	}

	//Remove
	while(!q.empty()){
		cout<<q.top()<<" ";
		q.pop();
	}

	return 0;
}
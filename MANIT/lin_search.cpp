#include<iostream>
using namespace std;

int linearSearch(int a[],int n,int key){

	//Search - by iterating over entire array
	for(int i=0;i<n;i++){
		if(a[i]==key){
			return i;
		}
	}
	return -1;
}


int main(){

	int a[] = {1,3,2,5,6,7,10,11};
	int n = 8;
	int key;
	cin>>key;

	cout<<linearSearch(a,n,key)<<endl;



	return 0;
}
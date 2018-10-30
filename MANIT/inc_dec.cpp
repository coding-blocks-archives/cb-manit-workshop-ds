#include<iostream>
using namespace std;

void inc(int n){
	//Base Case
	if(n==0){
		return;
	}
	//Rec Case
	inc(n-1);
	cout<< n <<" ";
}

void dec(int n){
	//Base Case
	if(n==0){
		return;
	}
	//Rec Case
	cout<< n <<" ";
	dec(n-1);

}

int main(){
	inc(5);
	cout<<endl;
	dec(5);
	cout<<endl;

	return 0;
}
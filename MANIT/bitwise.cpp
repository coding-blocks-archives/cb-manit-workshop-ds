#include<iostream>
using namespace std;

int getLastBit(int n){
	return n&1;
}
int ithBit(int n,int p){
	return (n&(1<<p)) > 0 ? 1 : 0;
}
int countBits(int n){

	int cnt=0;
	while(n>0){
		
		cnt += (n&1);

		n = n>>1;
	}
	return cnt;

}

int main(){

		int n,p;
		cin>>n ;//>>p;
		/*
		if(getLastBit(n)){
			cout<<"Odd";
		}
		else{
			cout<<"Even";
		}

		*/
		//cout<<ithBit(n,p)<<endl;
		cout<<countBits(n)<<endl;


		return 0;
}
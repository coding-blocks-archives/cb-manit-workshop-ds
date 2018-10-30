#include<iostream>
using namespace std;

int steps(int n){
	if(n==1){
		return 0;
	}
	//Base Case
	int x,y,z,ans;
	x = y = z = ans = INT_MAX;

	x = steps(n-1) + 1;

	if(n%2==0){
		y = steps(n/2) + 1;
	}

	if(n%3==0){
		z = steps(n/3) + 1;  
	}

	ans = min(x,min(y,z));
}

int main(){

	int n;
	cin>>n;

	cout<<steps(n)<<endl;

	return 0;
}
#include<iostream>
#include<ctime>
using namespace std;


int power(int a,int n){
	if(n==0){
		return 1;
	}
	int ans = a*power(a,n-1);
	return ans;
}

int powerLoop(int a,int n){
	
	int ans = 1;
	for(int i=0;i<=n;i++){
		ans = ans*i;
	}
	return ans;
}

int fastPower(int a,int n){
	if(n==0){
		return 1;
	}
	//Rec Case
	int smallAns = fastPower(a,n/2);
	smallAns = smallAns*smallAns; //Squaring

	if(n%2==1){
		return a*smallAns;
	}
	//n is even
	return smallAns;
}

int main(){
	int a=1,n;
	cin>>n;

	clock_t start,end;


	start = clock();
	powerLoop(a,n);
	end = clock();
	
	cout<<"Power : " <<end-start<<endl;

	start = clock(); 
	fastPower(a,n);
	end = clock();

	cout<<"Fast Power : "<<end-start<<endl;


	return 0;
}
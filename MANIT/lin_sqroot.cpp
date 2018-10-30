#include<iostream>
using namespace std;

int sqRoot(int n){

	int i=0;
	for( ;i*i<=n;i++){
		
	}
	int ans = i-1;
	return ans;

}
float sqRoot(int n,int p){

	float i=0;
	float inc = 1;

	int times=0;
	while(times<=p){
		for(  ;i*i<=n;i=i+inc){}

		i = i-inc;
		inc = inc/10;
		times++;
	}
	return i;
}

int squareRootBS(int n){

	int s = 0;
	int e = n;
	int mid,ans = 0;

	while(s<=e){
		mid = (s+e)/2;

		if(mid*mid==n){
			return mid;
		}
		else if(mid*mid>n){
			e = mid - 1;
		}
		else{
			ans = mid;
			s = mid + 1;
		}

	}
	return ans;

}


int main(){
	int n,p;
	cin>>n;

	cout<<squareRootBS(n);


}
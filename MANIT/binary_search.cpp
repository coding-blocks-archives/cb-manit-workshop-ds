#include<iostream>
using namespace std;

int binarySearch(int a[],int n,int key){

	int s = 0;
	int e = n-1;

	while(s<=e){

		int mid = (s+e)/2;

		if(a[mid]==key){
			return mid;
		}
		else if(a[mid]<key){
			s = mid+1;
		}
		else{
			e = mid - 1;
		}
	}
	return -1;

}


int main(){

	int a[] = {1,2,5,6,18,20,22,25};
	int n = 8;
	int key;
	cin>>key;

	cout<<linearSearch(a,n,key)<<endl;



	return 0;
}
#include<iostream>
#include<algorithm>
//Prebuilt functions for sorting and searching!
using namespace std;

bool myCompare(int a,int b){
	return a<b;
}

int main(){

	int a[] = {5,4,1,2,2,2,6,2};
	int n = 8;
	//Sort the array
	sort(a,a+n,myCompare);

	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
	//Binary Search
	int key;
	cin>>key;

	//Binary Search
	//Upper Bound
	//Lower Bound

	if(binary_search(a,a+n,key)){
		cout<<"Found !";
	}
	else{
		cout<<"Not found!";
	}

	//Index Find out!
	//Lower bound same number first occurence address
	cout<<"lower bound"<<endl;
	auto first_occ_address = lower_bound(a,a+n,key);
	cout<<(first_occ_address - a)<<endl;

	cout<<endl<<"Upper Bound"<<endl;

	//Upper Bound - next larger no ka first occurene 
	auto next_big_occ_address = upper_bound(a,a+n,key);
	cout<<(next_big_occ_address - a)<<endl;







	return 0;
}
#include<iostream>
using namespace std;

char a[10][10] = {
	"zero",
	"one","two","three","four","five",
	"six","seven","eight","nine"
};

void spellings(int no){
	//Base Case
	if(no==0){
		return;
	}
	//Rec Case
	int last_digit = no%10;

	spellings(no/10);
	cout<<a[last_digit]<<" ";
	
}


int main(){

	int n;
	cin>>n;
	spellings(n);
	
	return 0;
}
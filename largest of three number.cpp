#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter three numbers\n";
	cin>>a>>b>>c;
	if(a>=b&&a>=c){
		cout<<a<<"\tis the largest";
	}
	else if(b>=a&&b>=c){
		cout<<b<<"\tis the largest";
	}
	else{
		cout<<c<<"\tis the largest";
	}
	return 0;
}
